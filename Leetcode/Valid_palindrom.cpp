class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z' || isdigit(s[i])){
                temp.push_back(s[i]);
            }
        }
        string org = temp;
        string rev = temp;
        reverse(rev.begin(),rev.end());
        if(temp == rev){
            return true;
        }
        else {
            return false;
        }
    }
};