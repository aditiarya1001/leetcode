class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int>temp;
        for(int i=1; i<n; i++) 
            temp.push_back(i);
        temp.push_back(n);
        temp.push_back(n);
        sort(nums.begin(), nums.end());
        return nums == temp;
    }
};