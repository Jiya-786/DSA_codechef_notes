//to merge 2 arrasy in increasing order we will use the merge sort algorithm we learn .
//we maintain 3 variables i j and k
//i for the first array j for the 2nd array and k for a new 3rd array which will be of size m+n
//but here since we are using vector c we dont need the k variable

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c;
        int i=0;int j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                c.push_back(nums1[i]);
                i++;
            }
            else{
                c.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            c.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            c.push_back(nums2[j]);
            j++;
        }
        for(int i=0;i<n+m;i++){
            nums1[i]=c[i];
        }
    }
};