class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_map<int,int> freq;
        for(int a : nums){
            freq[a]++;
        }
        nums.clear();
        for(auto const& [element,count]:freq){
            nums.push_back(element);
        }
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};