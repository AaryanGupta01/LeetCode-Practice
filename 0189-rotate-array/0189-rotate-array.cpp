class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        deque<int>dq;
        if(nums.size() == 1){
            return nums;
        }
        else{
            for(int i=0;i<nums.size();i++){
                dq.push_back(nums[i]);
            }
            int m = k % dq.size();
            for(int i=0;i<m;i++){
                int last = dq.back();
                dq.pop_back();
                dq.push_front(last);
            }
        }
        for(int i=0;i<dq.size();i++){
            nums[i] = dq[i];
        }
        return nums;
    }
};