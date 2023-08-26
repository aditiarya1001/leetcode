// class Solution {
// public:
//     string removeTrailingZeros(string num) {
//         int indx = num.size() - 1; // Initialize with the last index
        
//         for (int i =0;i<num.size();i++) {
//             if (num[i] != '0') {
//                 indx = i; // Update indx to the index of the last non-zero character
//             }
//         }
        
//         string ans = "";
//         for (int j = 0; j < indx+1; j++) {
//             ans += num[j];
//         }
//         return ans;
//     }
// };

class Solution {
public:
        string removeTrailingZeros(string num) {
        int i = num.size()-1;
        while(num[i]=='0') i--;
        return num.substr(0, i+1);
        }
};