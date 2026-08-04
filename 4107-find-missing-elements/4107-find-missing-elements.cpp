class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> miss;
        for(int i=nums[0];i<=nums[nums.size()-1];i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                miss.push_back(i);
            }
        }

        sort(miss.begin(),miss.end());
        return miss;
    }
};