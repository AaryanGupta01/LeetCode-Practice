class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(m1[a] != m1[b]){
                return m1[a] < m1[b];
            }
            else if(m1[a] == m1[b]){
                return a > b; 
            }
            return true;
        });
        return nums;
    }
};