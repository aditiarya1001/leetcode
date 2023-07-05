class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=nums[low]){// means left half is sorted
                ans=min(ans,nums[low]);  //storing the minimum 
                low=mid+1; //eleminating left half
            }
            else{ //else right half is sorted
                ans=min(ans,nums[mid]);// storing the minimum
                high=mid-1;
            }
        }
        return ans;
    }
};