class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int l=0;
        int h=n-1;
        
        while(l<h)
        {
            int mid= l+ (h-l)/2;
            
            
            if(mid+1<n && nums[mid]>nums[mid+1])
            {
                h= mid;
            }
            else if(mid-1>=0 && nums[mid]>nums[mid-1])
            {
                l=mid+1;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
        
    }
};