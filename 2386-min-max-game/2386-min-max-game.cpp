class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        vector<int>arr;
        int count = 0;
        int min_val = min({nums[0],nums[1]});
        arr.push_back(min_val);
        count++;
        for(int i=2;i<n;i+=2){
            if(count % 2 == 0 && i+1 < n){
                arr.push_back(min({nums[i],nums[i+1]}));
            }
            else if(count % 2 != 0 && i+1 < n){
                arr.push_back(max({nums[i],nums[i+1]}));
            }
            else if(count % 2 == 0){
                arr.push_back(min({nums[n-2],nums[n-1]}));
            }
            else{
                arr.push_back(max({nums[n-2],nums[n-1]}));
            }
            count++;
        }
        return minMaxGame(arr);
    }
};