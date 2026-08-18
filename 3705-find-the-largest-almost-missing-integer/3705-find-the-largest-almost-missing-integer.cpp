class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        if(k == 1){
            unordered_map<int,int>m1;
            for(int i=0;i<nums.size();i++){
                m1[nums[i]]++;
            }    
            for(const auto&[el,count]:m1){
                if(count == 1){
                    ans.push_back(el);
                }
            }
            if(ans.empty()){
                return -1;
            }
            int ma = *max_element(ans.begin(),ans.end());
            return ma;
        }
        else if(k == n){
            int m = *max_element(nums.begin(),nums.end());
            return m;
        }
        else{
            int res = -1;
            unordered_map<int,int>m2;
            for(int i=0;i<nums.size();i++){
                m2[nums[i]]++;
            }    
            if(m2[nums[0]] == 1){
                res = max(res,nums[0]);
            }
            if(m2[nums[n-1]] == 1){
                res = max(res,nums[n-1]);
            }
            return res;
        }
    }
};