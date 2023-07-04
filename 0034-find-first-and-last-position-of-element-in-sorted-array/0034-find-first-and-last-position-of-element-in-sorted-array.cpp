class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        int mid=0;
        int first=-1;
        int last=-1;
        
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                return {0,0};
            }
        }
        while(st<=end)
        {
            mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                first=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }

        st=0;
        end=nums.size()-1;
        mid=0;
        while(st<=end)
        {
            mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                last = mid;
                st=mid+1;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        return {first,last};

    }
    
};