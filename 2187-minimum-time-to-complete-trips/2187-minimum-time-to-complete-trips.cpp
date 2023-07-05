class Solution 
{
public:
   #define ll long long
    
    bool is_possible(ll max_time, vector<int> &time, int tt)
    {
        ll num=0;
        
        for(auto &t: time)
        {
            num+=max_time/t;
        }
        return(num>=tt);
    }
    
    long long minimumTime(vector<int>& time, int tt) {
        sort(time.begin(),time.end());
        int n= time.size();
        ll l= time[0];
        ll h= (ll)time[n-1]*tt;
        
        while(l<h)
        {
            ll mid=l+ (h-l)/2;
            if(is_possible(mid,time,tt))
            {
                h=mid;
            }
            else
            {
               l=mid+1; 
            }
        }
        return l;
    }
};