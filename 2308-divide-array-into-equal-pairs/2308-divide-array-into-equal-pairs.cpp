class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m1;
        bool ans = true;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for(int i=0;i<m1.size();i++){
            if(m1[i] % 2 != 0){
                ans = false;
                break;
            }
        }
        return ans;
        
    }
};