//using merge sort to count number of inversions-optimal
// we can use the fact that during merging ofarray we can compare left half and right half
//chekc out count inversions video of shraddha khapra
class Solution {
public:
    int reversePairs(vector<int>& nums) {
         return mergeSort(nums,0,nums.size()-1);
    }
    int merge(vector<int>& nums,int left,int mid,int right){
            int i=0;int j=0;int k=0;
            i=left;
            j=mid+1;
            k=right;
            int countInv=0;
            vector<int> ans;
            while(i<=mid && j<=right){
                if(nums[i]<=nums[j]){
                    ans.push_back(nums[i]);
                    i++;
                }
                else{
                    ans.push_back(nums[j]);
                    j++;
                    countInv+=(mid-i+1);
                                                                }
            }
            while(i<=mid){
                ans.push_back(nums[i]);
                i++;
            }
            while(j<=right){
                ans.push_back(nums[j]);
                j++;
            }
            for(int k = 0; k < ans.size(); k++) {
                nums[left + k] = ans[k];
            }
            return countInv;
        }

        int mergeSort(vector<int>& nums,int left,int right){
            if(left<right){
                int mid=(right+left)/2;
                int LeftCountInv=mergeSort(nums,left,mid);
                int RightCountInv=mergeSort(nums,mid+1,right);
                int CountInv=merge(nums,left,mid,right);
                return LeftCountInv+RightCountInv+CountInv;
            }
            return 0;
            
        }

        // vector<int> sortArray(vector<int>& nums) {
        //     mergeSort(nums,0,nums.size()-1);
        //     return nums;
        // }

};


