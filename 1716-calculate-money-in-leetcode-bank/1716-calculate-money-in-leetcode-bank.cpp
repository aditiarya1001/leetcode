class Solution {
public:
    int sum(int t){
        int num=t/7;
        int ans=0;
        int a=1;  //initially at week 1--> a=1
        int l=7;  //initially at week 1--->l=7
        // calculating full weaks
        //sum of AP=n/2(a+l)
        while(num--){
            ans+=(7*(a+l))/2;
            a++;
            l++;
        }
        int rem=t%7;
        //calculating left over days
        //sum of AP=n/2(a+l)
        while(rem--){
            ans+=a;
            a++;
        }
        return ans;
    } 
    int totalMoney(int n) {
        if(n<7)
        {
            return (n*(n+1)/2);
        }
        else
        {
            return sum(n);
        }
    }
};
