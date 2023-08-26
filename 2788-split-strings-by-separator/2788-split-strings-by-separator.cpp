class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            string str="";
            for(int j=0;j<words[i].size();j++)
            {
                if(words[i][j]==separator)
                {
                    res.push_back(str);
                    str="";
                }
                else{
                str.push_back(words[i][j]);
                }
            }
            if(!str.empty())
            {
                res.push_back(str); //to push the last remaining string
            }  
        }
        for(int i=0;i<res.size();i++)
        {
            if(res[i]!="")
            {
                ans.push_back(res[i]);
            }
        }
            return ans;
    }

    
};
// class Solution {
// public:
//     vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
//         vector<string> res;
        
//         for(int i = 0; i < words.size(); i++) {
//             string str = "";
//             for(int j = 0; j < words[i].size(); j++) {
//                 if(words[i][j] == separator) {
//                     res.push_back(str);
//                     str = "";  // Reset the temporary string
//                 } else {
//                     str.push_back(words[i][j]);
//                 }
//             }
//             if (!str.empty()) {
//                 res.push_back(str);  // Push the last remaining string
//             }
//         }
        
//         return res;
//     }
// };
