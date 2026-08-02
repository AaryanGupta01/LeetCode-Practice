class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s1;
        for(int i =0 ;i < nums.size();i++){
            if(s1.contains(nums[i])){
                return true;
            }
            s1.insert(nums[i]);
            if(s1.size() > k){
                s1.erase(nums[i-k]);
            }
        }
        return false;
    }
};