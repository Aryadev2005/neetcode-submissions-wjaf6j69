class Solution {
public:
void reverse(vector<char>& str , int i){
            if(i>=str.size()/2){
                return;
            }
            swap(str[i],str[str.size()-i-1]);
            reverse(str , i+1);
        }
void reverseString(vector<char>& s) {
        reverse(s , 0);

    }
};