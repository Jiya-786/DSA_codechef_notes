#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include<string>

vector<int> nextGreaterElements(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,-1);
    stack<int> s;

    for(int i=2*n-1;i>=0;i--){
        
        while(!s.empty() && s.top()<=nums[i%n]){
            s.pop();
        }

        if(s.empty()){
            ans[i%n]=-1;
            // s.push(nums[i%n]);
        }
        else{
            ans[i%n]=s.top();
        }
        s.push(nums[i%n]);
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

    vector<int> arr;

    for(int i=0;i<n;i++){
        int elt;
        cin>>elt;
        arr.push_back(elt);
    }

    vector<int> nums=nextGreaterElements(arr);
    display(nums);
    // display(arr);
}