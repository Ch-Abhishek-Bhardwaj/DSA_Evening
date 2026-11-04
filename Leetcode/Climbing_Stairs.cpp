class Solution {
public:
    int climbStairs(int n) {
        int x =1;
        int y=1;

        if(n<=1){
            return x;
        }
        for(int i=0;i<=n-2;i++){
            int temp = x+y;
            x = y;
            y= temp;
        }
        return y;
    }
};