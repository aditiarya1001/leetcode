class Solution {
public:
    bool isAnagram(string s, string t) {
        //1st approach
    //     if(s.length()!=t.length())
    //     {
    //         return false;
    //     }
    //     unordered_map<char,int> s1,t1;
    //     for(int i=0;i<s.length();i++)
    //     {
    //         s1[s[i]]++;
    //         t1[t[i]]++;
    //     }
    //     if(s1!=t1)  //it compares each and every key value pairs
    //     {
    //         return false;
    //     }
    //     return true;
    // }
//     //2nd approach    
//         if(s.length()!=t.length())
//         {
//             return false;
//         }
//         unordered_map<char,int> mp;
//         for(int i=0;i<s.length();i++)
//         {
//             mp[s[i]]++;
//             mp[t[i]]--;
//         }
//         for(auto it:mp)
//         {
//             if(it.second!=0) return false;
//         }

//         return true;
//     }
        
        //3rd approach
        
        if(s.size()!=t.size()) 
            return false;
        vector<int>hash(26,0);
        
        int n = s.size(), x = 0;
        
        for(int i=0; i<n; i++){
            hash[s[i]-97]++;
            hash[t[i]-97]--;
        }
        for(auto &i : hash) if(i) return false;
        return true;
    }
        
};