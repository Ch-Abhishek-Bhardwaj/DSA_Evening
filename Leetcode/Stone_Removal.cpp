class Solution {
public:
    bool canAliceWin(int n) {
        bool ans = true;
        int div =10;
        
        while(n>=div && div>0){
            n= n-div;
            div--;
            ans = !ans;
        }
        return !ans;
    }
};