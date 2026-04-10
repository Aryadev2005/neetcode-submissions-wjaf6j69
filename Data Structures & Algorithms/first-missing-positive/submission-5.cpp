class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int c = 0;
        int minu = numeric_limits<int>::max();
        if (!(find(nums.begin(), nums.end(), 1) != nums.end())) {
            return 1;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i+1]-nums[i]>1){
                if(nums[i]+1 <= 0){
                    continue;
                }
                c++;
                minu = min (minu , nums[i]+1 );
            }
        }
        if(c==0){
            return nums[nums.size()-1]+1;
        }
        return minu;
    }
};