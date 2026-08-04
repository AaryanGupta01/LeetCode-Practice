class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> miss;
        int n = nums.size();
        for(int i=nums[0];i<=nums[n-1];i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                miss.push_back(i);
            }
        }

        sort(miss.begin(),miss.end());
        return miss;
    }
};