class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int i = 0;
        int j = 0;

        while (i < n && j < t.size()) { // Check if we are within bounds of both strings
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == n; // Check if we successfully matched all characters in s
    }
};
