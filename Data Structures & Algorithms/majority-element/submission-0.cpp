class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int a:nums){
            freq[a]++;
        }
        vector<pair<int,int>> ch;
        for(auto const& [element,frequency]:freq){
          ch.push_back({element,frequency});
        }
        auto it = max_element(ch.begin(),ch.end(), 
    [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    auto it1 = find_if(ch.begin(), ch.end(), 
        [&it](const auto& p) { return p.second ==it->second; });

    if (it1!= ch.end()) {
        // Access the .first element of that pair
        return it1->first;
    }
    return 0;

    }
};