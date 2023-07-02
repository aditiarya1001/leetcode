class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        
        while(l<=r)
        {
            int m= l+ (r-l)/2;
            if(nums[m]==target)
                return m;
            if(nums[m]<target)
            {
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
          // If the element is not present then the position of the element will be at low hence return low
        return l;
    }
};