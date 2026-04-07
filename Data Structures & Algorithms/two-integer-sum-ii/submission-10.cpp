class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ch;
        int left = 0 ;
        int right = numbers.size() - 1 ;
        while(right>left){
           int sum = numbers[left] + numbers[right];
           if(sum == target){
              ch.push_back(left+1);
              ch.push_back(right+1);
              return ch;
           }
           else if (sum > target){
            right--;
           }
           else {
            left++;
           }
        }
        return ch;
    }
};
