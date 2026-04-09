class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0 ;
        int right = heights.size()-1;
        int product = 1;
        while(left < right){
            int ind_diff = right - left;
            if(min(heights[left],heights[right])==0 && heights.size()==2){
                product = 0 ;
            }
            product = max(ind_diff*(min(heights[left],heights[right])),product);
            if(right - left > 1){
                right --;
            }
            else{
                left++;
                right = heights.size()-1;
            }
        }
        return product;
    }
};
