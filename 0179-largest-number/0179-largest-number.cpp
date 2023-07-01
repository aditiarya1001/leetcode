class Solution {
public:
    
    static bool mycomp(string &a, string &b)
    {
        return a+b>b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        
        for(auto i: nums)
        {
            ans.push_back(to_string(i));
        }
        
        sort(ans.begin(),ans.end(),mycomp);
        if(ans[0] == "0")
        {
            return "0";
        }
        string result= "";
        
        for(auto i: ans)
        {
            result+=i;
        }
        return result;
    }
};