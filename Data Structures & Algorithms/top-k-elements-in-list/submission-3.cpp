class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<pair <int,int>> arr;
        for(auto const& [element,count]:freq){
            arr.push_back({count,element});
        }
        sort(arr.begin(),arr.end());
        int n = arr.size()-1;
        int m = 0;
        vector<int> arr1;
        while(k!=0){
            arr1.push_back(arr[n].second);
            k--;
            n--;
        }
        return arr1;
    }
};
