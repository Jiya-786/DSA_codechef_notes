#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include<string>

// BRUTE FORCE
// vector<int> calculateSpan(vector<int>& prices){
//     int n=prices.size();
//     vector<int> ans(n,0);
//     stack<int> s1;
//     stack<int> s2;

//     for(int i=0;i<n;i++){
//         s2.push(prices[i]);
//         s1=s2;
//         int span=0;
//         while(!s1.empty() && s1.top()<=prices[i]){
//             s1.pop();
//             span++;
//         }
//         ans[i]=span;
//     }
//     return ans;
// }

// void display(vector<int>& ans){
//     int n=ans.size();
//     for(int x:ans){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int> input;
//     while(n--){
//         int elt;
//         cin>>elt;
//         input.push_back(elt);
//     }

//     vector<int> ans=calculateSpan(input);
//     display(ans);
// }

// for optimized solution we should make use of the fact that
// every previous ans[i] will hold info about the span. we need to utilize that
// so if for index i, elt[i-1]<elt[i] then ans will be span of elt[i-1]+1. the extra 1 to count the elt[i] itself
// otherwise we will have to find an elt smaller that elt[i] to its left and add 1 to get our ans

// NOT THIS WAY, this is again brute force because this will give o(n) whenever we search for an index inside an i of a for loop
// TO FIND THE SMALLER ELT ON THE LEFT WE WILL JUMP BY THE SPAN OF THE ELT 
// JUST BEOFRE ELT[i] AND CHECK IF WHERE WE LANDED IS LESS THAN ELT[i] BECUASE SPAN IS DEFINED AS
// STARTING FROM THE ELT AND GOING TO THE LEFT UNTIL WE ENCOUNTER A GREATER PRICE IF NOT WE AGAIN JUMP BY THE 
// SPAN OF THE ELT WE LANDED ON .
// 
// int findIndex(vector<int>& prices,int i){
//     for(int j=i-1;j>=0;j--){
//         if(prices[j]<=prices[i]){
//             return j;
//         }
//     }
//     return -1;
// }

vector<int> calculateSpan(vector<int>& prices){
    vector<int> ans;
    stack<int> s;   // because first elt will always have span 1

    for(int i=0;i<prices.size();i++){
        // int reqPrice=prices[i]; 
        // if(prices[i-1]<=reqPrice){
        //     ans.push_back(ans[i-1]+1);
        // }

        // else{
        //     // else we search for a larger elt and our ans will be index-no of steps taken to reach that larger elt
        // }

        if(s.empty()){
            ans.push_back(1);
            s.push(i);
        }
        else{
            while(!s.empty() && prices[s.top()]<=prices[i]){
                s.pop();
            }
            if(s.empty()){
                // ans.push_back(1);
                ans.push_back(i+1);
            } 
            else{
                ans.push_back(i-s.top());
            } 
            s.push(i);
        }
    }
    return ans;
}

void display(vector<int>& ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>input;

    while(n--){
        int elt;
        cin>>elt;
        input.push_back(elt);
    }

    vector<int> ans=calculateSpan(input);
    display(ans);
}