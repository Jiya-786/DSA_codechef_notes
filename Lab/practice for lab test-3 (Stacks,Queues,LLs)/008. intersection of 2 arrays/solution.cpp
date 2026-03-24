#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include<string>

vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    unordered_map<int,int> count;
    vector<int> ans;
    for(int x:nums1){
        count[x]++;
    }
    for(int x:nums2){
        while(count[x]>0){
            ans.push_back(x);
            count[x]--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums1,nums2;
    int n;
    int m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    vector<int> ans=intersection(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}