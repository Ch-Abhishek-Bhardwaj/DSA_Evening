class Solution {
public:
    int reverse(int x) {
        long long n = x;
        if(x<0){
            n = abs(n);
        }       
        string s = to_string(n);
        string ans;
        string ye = "-";
        
        for(int i=s.length()-1;i>-1;i--){
            ans.push_back(s[i]);
        }
        int m = ans.length()-1;
        
        long long anss = stoll(ans);
        if(x<0){
            anss = -anss;
        }
        if (anss > INT_MAX || anss < INT_MIN) {
            return 0;
        }
        return anss;
    }
};