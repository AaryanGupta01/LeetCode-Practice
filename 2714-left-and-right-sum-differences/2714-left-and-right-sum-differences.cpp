class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum(nums.size());
        vector<int> ans;
        int lsum = 0;
        for(int i=1;i<=nums.size();i++){
            if(i == 1){
                leftSum.push_back(0);
            }
            else{
                lsum += nums[i-2];
                leftSum.push_back(lsum);
            }
        }
        int rsum = 0;
        for(int i=nums.size()-1;i>=0;i--){
            rightSum[i] = rsum;
            rsum += nums[i];
        }
        //Difference

        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return ans;
    }
};