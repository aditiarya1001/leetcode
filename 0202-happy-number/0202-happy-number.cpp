class Solution {
public:
    int square(int n){
        if(n>=0 && n<=9){
            return n;
        }
        int ans = 0;
        while(n!=0){
            int rem = n%10;
            int sqr = rem*rem;
            ans+=sqr;
            n = n/10;
        }
        int a = square(ans);
        return a;
    }
    
    bool isHappy(int n) {
        int ans;
      ans= square(n);
        if(ans==1 || ans==7)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};