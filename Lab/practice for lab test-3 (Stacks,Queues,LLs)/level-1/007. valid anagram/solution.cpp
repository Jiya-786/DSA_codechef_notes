#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include<string>

bool validAnagram(string s,string t){
    unordered_map<char,int> count;

    if(s.length()!=t.length()){
        return false;
    }
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
        count[t[i]]--;
    }
    for(auto it:count){
        if(it.second!=0){
            return false;
        }
    }

    return true;

}

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    string t;
    cin>>s;
    cin>>t;

    if (validAnagram(s,t)) cout<<"valid anagram"<<endl;
    else cout<<"invalid anagram"<<endl;
    }
    
}