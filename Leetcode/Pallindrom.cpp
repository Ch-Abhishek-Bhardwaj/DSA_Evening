class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        string s = to_string(n);
        string ans;
        for(int i=s.length()-1;i>-1;i--){
            ans.push_back(s[i]);
        }
        
        return s==ans;
    }
};