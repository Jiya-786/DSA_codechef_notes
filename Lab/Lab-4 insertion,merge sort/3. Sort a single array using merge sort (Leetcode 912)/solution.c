class Solution {
public:
    
        void merge(vector<int>& nums,int left,int mid,int right){
            int i=0;int j=0;int k=0;
            i=left;
            j=mid+1;
            k=right;
            vector<int> ans;
            while(i<=mid && j<=right){
                if(nums[i]<=nums[j]){
                    ans.push_back(nums[i]);
                    i++;
                }
                else{
                    ans.push_back(nums[j]);
                    j++;
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
        }

        void mergeSort(vector<int>& nums,int left,int right){
            if(left<right){
                int mid=(right+left)/2;
                mergeSort(nums,left,mid);
                mergeSort(nums,mid+1,right);
                merge(nums,left,mid,right);
            }
        }

        vector<int> sortArray(vector<int>& nums) {
            mergeSort(nums,0,nums.size()-1);
            return nums;
        }

};