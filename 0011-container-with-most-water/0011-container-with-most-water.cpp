class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = height.size()-1;
        int vol = min(height[right],height[left])*(right-left);
        while(left < right){
            if(height[left] <= height[right]) left++;
            else if(height[left] > height[right]) right--;
            
            if((min(height[left],height[right]) * (right-left)) > vol){
                vol = min(height[left],height[right]) * (right-left);
            }
        }
        return vol;
    }
};