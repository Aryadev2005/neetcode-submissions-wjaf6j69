class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> val;
        int n = nums.size();
        for(int i =0 ; i<n ; i++){
            val.push_back({nums[i],i});
        }
        sort(val.begin(), val.end());
        int left = 0;
        int right = nums.size()-1;
        while(right>left){
            int currentSum = val[left].first+ val[right].first;
            if(currentSum == target){
                return {min(val[left].second , val[right].second),max(val[left].second,val[right].second)};
            }
            else if(currentSum<target){
                left++;
            }
            else{
                right--;
            }
        }
    } 
};
