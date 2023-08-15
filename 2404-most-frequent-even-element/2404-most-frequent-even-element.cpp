class Solution {
public:
    static bool compfreq(pair<int,int> &a, pair<int,int> &b) {
        if (a.second != b.second) {
            return a.second > b.second; // Sort by frequency in descending order
        }
        return a.first < b.first; // If frequency is equal, sort by element value in ascending order
    }

    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> sorted;
        for(auto &x: nums)
        {
            if(x%2==0)
            {
                mp[x]++;
            }
        }
        if(mp.size()==0)
        {
            return -1;
        }
        
        for(auto &x: mp)
        {
            sorted.push_back(x);
        }
        
        sort(sorted.begin(),sorted.end(), compfreq);
        return sorted[0].first;
        
    }
};