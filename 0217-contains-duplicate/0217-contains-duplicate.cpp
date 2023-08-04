class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //1st
//         map<int,int> mp;
//         int n= nums.size();
//         for(int i=0;i<n;i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(auto & it:mp){
//             if(it.second>1){
//                     return true;
//             }
//         }
//         return false;
        
//     }
        //2nd
        sort(nums.begin() , nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
         }
};