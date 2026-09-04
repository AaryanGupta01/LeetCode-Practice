class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        while(i<n){
            int ma = *max_element(nums.begin(),nums.begin()+i);
            int mi = *min_element(nums.begin()+i,nums.end());
            if(ma - mi <= k){
                return i;
            }
            i++;
        }
        return -1;
    }
};