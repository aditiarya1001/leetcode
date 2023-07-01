class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> stk;
        
        for(char c: num)
        {
            while(k>0 && !stk.empty() && stk.top()>c)
            {
                stk.pop();
                k--;
            }
            stk.push(c);
        }
        
        while(k>0)
        {
            stk.pop();
            k--;
        }
        
        string res;
        
        while(!stk.empty())
        {
            res+= stk.top();
            stk.pop();
        }
        reverse(res.begin(),res.end());
        
        while(res.size()>1 && res[0]=='0')
        {
            res.erase(res.begin());
        }
        
        if(res.empty())
        {
            return "0";
        }
        
        return res;
        
    }
};