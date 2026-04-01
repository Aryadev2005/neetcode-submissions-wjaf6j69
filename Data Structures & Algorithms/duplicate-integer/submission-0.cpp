class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int , int> freq;
        for(int num : nums){
            freq[num]++;
        }
        for(auto const& [element,count]:freq){
            if (count>1){
                return true;
            }
        }
        return false;
    }
};