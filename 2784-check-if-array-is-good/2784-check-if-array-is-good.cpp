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
        int n = nums.size()-1;
        map<int,int>mp;
        for(int i=1; i<n; i++) mp[i]=1;
        mp[n]=2;
        for(auto &i : nums) 
            mp[i]--;
        for(auto &i : mp) 
            if(i.second) 
                return false;
        
        return true;
    }
};