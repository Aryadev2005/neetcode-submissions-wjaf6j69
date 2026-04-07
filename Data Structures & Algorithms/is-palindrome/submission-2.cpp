class Solution {
public:
    bool reverse(string& str , int i){
            if(i>=str.size()/2){
                return true;
            }
            if(str[i]!=str[str.size()-i-1]){
            return false;
            }
            return reverse(str,i+1);
        }
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !isalnum(c); 
    }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        return reverse(s,0) ;
    }
};
