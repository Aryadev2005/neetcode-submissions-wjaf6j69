class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int max_streak = 1;
        int current_streak = 1;
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i+1] == nums[i] + 1) {
                current_streak++;
            } else {
                max_streak = max(max_streak, current_streak);
                current_streak = 1;
            }
        }
        return max(max_streak, current_streak);
    }
};