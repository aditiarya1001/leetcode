class Solution {
public:
    bool isGood(vector<int>& nums) {
        // int n = nums.size()-1;
        // vector<int>temp;
        // for(int i=1; i<n; i++) 
        //     temp.push_back(i);
        // temp.push_back(n);
        // temp.push_back(n);
        // sort(nums.begin(), nums.end());
        // if(nums == temp)
        // {
        //     return true;
        // }
        // return false;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=1; i<n-1; i++) mp[i]=1;
        mp[n-1]=2;
        for(int i =0;i<n;i++) 
            mp[nums[i]]--;
        for(auto &i : mp) 
            if(i.second!=0) 
                return false;
        
        return true;
    }
};