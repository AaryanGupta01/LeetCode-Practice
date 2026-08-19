class Solution {
public:
    int minimumCost(vector<int>& nums) {  
        int sum = 0, min = 0; 
        if(nums.size() == 3){
            return nums[0] + nums[1] + nums[2]; 
        }
        else{
            min = *min_element(nums.begin()+1,nums.end());
            sort(nums.begin()+1,nums.end());
        }
        return nums[0]+min+nums[2];
    }
};