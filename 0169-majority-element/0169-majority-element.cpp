class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m1;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for(const auto&[key,val]:m1){
            if(val > (n/2)){
                return key;
            }
        }
        return 0;
    }
};