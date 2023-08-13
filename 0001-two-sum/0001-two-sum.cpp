class Solution {
public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         //brute force
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i]+nums[j]== target)
//                 {
//                     return {i,j};
//                 }
//             }
//         }
//         return {0,0};
//        }
// };
vector<int> twoSum(vector<int>& nums, int target) {
    // using maps
    unordered_map<int,int>m;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
    if(m.find(target-nums[i])!=m.end())
    return {i,m[target-nums[i]]};
    else
    m[nums[i]]=i;
    }
    return {-1,-1};
}
};