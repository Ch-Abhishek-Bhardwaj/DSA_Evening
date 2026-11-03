class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n<=0) return false;

        long long x = 3;
        if(n==2) return false;
        while(x<n){
            
            
            x=x*3;
        }
        return x==n;
    }
};