class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(m1.count(complement)){
                return {m1[complement],i};
            }
            else{
                m1[nums[i]] = i;
            }
        }
        return {};
    }
};