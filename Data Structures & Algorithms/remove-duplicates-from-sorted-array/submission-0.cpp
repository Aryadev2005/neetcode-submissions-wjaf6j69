class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        map<int,int> freq;
        for(int a : nums){
            freq[a]++;
        }
        nums.clear();
        for(auto const& [element,count]:freq){
            nums.push_back(element);
        }
        return nums.size();
    }
};