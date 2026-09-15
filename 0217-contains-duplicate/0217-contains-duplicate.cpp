class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for(const auto &pair:m1){
            if(pair.second >= 2){
                return true;
            }
        } 
        return false;
    }
};