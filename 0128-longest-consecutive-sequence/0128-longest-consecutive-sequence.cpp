class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s1(nums.begin(),nums.end());
        int curr_num = 0;
        int cnt = 0;
        int max_streak = 0;

        for(int num:s1){
            if(s1.count(num-1)==0){
                curr_num = num;
                cnt=1; 

                while(s1.count(curr_num+1)){
                    curr_num = curr_num+1;
                    cnt++;
                }
                max_streak = max(max_streak,cnt);
            }
        }
        return max_streak;
    }
};