class Solution {
public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int> mp;
//         for(auto &i: nums1)
//         {
//             mp[i]=1;
//         }
//         vector<int>ans;
//         for(auto &i : nums2){
//             if(mp[i]!=0){
//                 ans.push_back(i);
//                 mp[i]=0;
//             } 
//         }
//         return ans;
//     }
// };
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>s;
        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j]) 
            {   
                s.insert(nums1[i]);
                i++;j++;
            }
            // if nums1[i] is larger than nums2[j], need to find bigger or equal el, so inc j
            else if(nums1[i]>nums2[j]) j++;
            else i++;
        }
        vector<int>v(s.begin(),s.end());
        return v;
}
};