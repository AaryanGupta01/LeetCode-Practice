class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size() <= 2){
            return nums.size();
        }
        int maxa = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        int n = nums.size();
        int mai = 0,mii=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == maxa){
                mai = i;
            }
            if(nums[i] == mini){
                mii = i;
            }
        }

        int mi = min(mai,mii);
        int ma = max(mai,mii);
    
        int del_left = ma+1;
        int del_right = (n-mi);
        int both = mi + 1 + (n - ma);
        return min({del_left,del_right,both});
    }
};