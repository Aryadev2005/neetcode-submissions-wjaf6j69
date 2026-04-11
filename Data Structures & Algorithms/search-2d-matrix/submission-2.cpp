class Solution {
public:
    bool search(vector<int> ch , int n){
        int left = 0;
        int right = ch.size()-1;
        while(left <= right){
            int mid = left + (right-left) /2;
            if(ch[mid]==n){
                return true;
            }
            else if(ch[mid] > n){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
    return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool f;
        for(int i = 0 ; i < matrix.size() ; i++){
           f = search(matrix[i],target);
           if(f == true){
            return f;
           }
        }
        return false;
    }
};
