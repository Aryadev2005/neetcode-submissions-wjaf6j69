class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        vector<int> ch;
        unordered_map<int,int> freq;
        for(int a:nums){
            freq[a]++;
        }
        for(auto const& [element,count]:freq){
            if(count > n){
                ch.push_back(element);
            }
        }
    return ch;
    }
};