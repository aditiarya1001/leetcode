class Solution {
public:
   int minAbsoluteDifference(vector<int>& nums, int x) {
    set<int> st;
    int n = nums.size();
    int ans = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (i - x >= 0)
            st.insert(nums[i - x]);  // Insert elements within the window into the set
        
        auto low = st.lower_bound(nums[i]);  // Find the lower bound in the set
        
        if (low != st.end())
            ans = min(ans, *low - nums[i]);  // Calculate the absolute difference
        
        if (low != st.begin()) {
            low--;  // Move to the previous element in the set
            ans = min(ans, nums[i] - *low);  // Calculate the absolute difference
        }
    }
    
    return ans;
}
};