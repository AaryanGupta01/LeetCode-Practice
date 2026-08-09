class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        vector<pair<int,int>> freqPair;
        for(auto &pair:m1){
            freqPair.push_back({pair.second,pair.first}); // freq,number
        }
        sort(freqPair.rbegin(),freqPair.rend());
        for(int i=0;i<k;i++){
            ans.push_back({freqPair[i].second});
        }
        return ans;
    }
};