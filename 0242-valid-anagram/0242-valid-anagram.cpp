class Solution {
public:
    bool isAnagram(string s, string t) {
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
        
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto it:mp)
        {
            if(it.second!=0) return false;
        }

        return true;
    }
};