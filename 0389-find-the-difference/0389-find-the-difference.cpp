class Solution {
public:
    char findTheDifference(string s, string t) {
        // int n=s.length();
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]!=t[i])
        //     {
        //         return t[i]; //ye loop frst case k according bs d tak check krega in abcd
        //     }
        // }
        // return t[n]; //koi equal nhi hoga last wla toh hoga hi kunki t mei ek extra h as per                              problem
        
        unordered_map<char,int>mp;
        
        for(const auto &c : s)
        {
            mp[c]++;
        }
         for(const auto &c:t) 
         {
             if(--mp[c]<0) 
             {
                 return c;
             }
         }
        return '\0';
    }
};