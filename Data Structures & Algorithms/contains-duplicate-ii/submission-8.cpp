class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() < 2 || k == 0) return false; 
        int left = 0;
        int right = nums.size() - 1;
        while (left < nums.size()) {
            if (left != right && nums[left] == nums[right]) {
                if (abs(right - left) <= k) {
                    return true;
                }
            }
            right--;
            if (right <= left) {
                left++;
                right = nums.size() - 1;
            }
        }
        return false;
    }
};