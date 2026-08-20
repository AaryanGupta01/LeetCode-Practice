class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j =1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums.size() == 1){
                return nums.back();
            }
            if(nums[i] == nums[j]){
                nums.erase(remove(nums.begin(),nums.end(),nums[j]),nums.end());
                --i;
            }
            else{
                return nums[i];
            }
        }
        return nums.back();
    }
};

// sort(nums.begin(),nums.end());
//         int j = 1;
//         for(int i=0;i<nums.size()-1;i++){
//             int ans = nums[i];
//             int count = 0;
//             nums[i] ^= nums[j];
//             if(nums[i] != 0){
//                 return ans;
//             }
//             else{
//                 if(count == 2){
//                     i = j;
//                     count = 0;
//                     j++;
//                     continue;
//                 }
//                 count++;
//             }
//             j++;
//         }
//         return 0;