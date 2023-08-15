class Solution {
public:
    static bool compfreq(pair<int,int> &a, pair<int,int> &b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> sorted;
        vector<int> result;

        for (auto x : nums) {
            mp[x]++;
        }

        for (auto &entry : mp) {
            sorted.push_back(entry);
        }

        sort(sorted.begin(), sorted.end(), compfreq);

        for (int i = 0; i < k; i++) {
            result.push_back(sorted[i].first); // Accessing .first for the element
        }

        return result;
    }
};
