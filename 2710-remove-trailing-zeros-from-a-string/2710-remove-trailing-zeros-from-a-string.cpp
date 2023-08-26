class Solution {
public:
    string removeTrailingZeros(string num) {
        int indx = num.size() - 1; // Initialize with the last index
        
        for (int i =0;i<num.size();i++) {
            if (num[i] != '0') {
                indx = i; // Update indx to the index of the last non-zero character
            }
        }
        
        string ans = "";
        for (int j = 0; j < indx+1; j++) {
            ans += num[j];
        }
        return ans;
    }
};
