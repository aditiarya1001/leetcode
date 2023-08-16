class Solution {
public:
//     //brute force but can't hande all test case due to TLE
//     //T.C. : O(N^2)
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int n = nums.size();
//         for (int i = 0; i < n; ++i) {
//             for (int j = i + 1; j < n; ++j) {
//                 if (nums[i] == nums[j] && abs(i - j) <= k) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

    
bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
    
    for(int i=0;i<nums.size();i++)
    {
        if(mp.find(nums[i])!=mp.end() && abs(i - mp[nums[i]]) <= k )
        {
            return true;
        }
        
         // Update the index of the element in the map
            mp[nums[i]] = i;
        }
        
        return false;
    }
};