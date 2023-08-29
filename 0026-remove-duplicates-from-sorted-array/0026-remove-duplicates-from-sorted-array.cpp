class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
 int n = nums.size();
        
        if (n == 0)
            return 0;
        if(n==1) return 1;
        
        int count = 1;
        
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] != nums[i]) {
                nums[count] = nums[i]; // Shift unique element to the front
                count++;
            }
        }
        return count;
    }
};