class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        vector<int> arr;
        int c = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0){
                c++;
                continue;
            }
            p = p*nums[i];
        }
        int d = 0;
        if(c==nums.size()){
            return nums;
        }else{
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0 && c==1){
                arr.push_back(p);
            }
            else if(c>=1){
            arr.push_back(0);
            }
            else{
            d = p/nums[i];
            arr.push_back(d);
            d = 0;
            }
        }}
        return arr;
    }};
