class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0 ;
        int right = nums.size()-1;
        int c = 0;
        while(left <= right){
            int mid = left + (right-left) / 2;
            if(nums[mid]==target){
                c++;
                return mid;
            }
            else if(nums[mid]<target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        if(c == 0){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            auto it = find(nums.begin(), nums.end(), target);
            if (it != nums.end()) {
            int index = distance(nums.begin(), it);
            return index;
        }
        }}
};