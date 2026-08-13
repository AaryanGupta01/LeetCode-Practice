class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>m1;
        vector<int> ans;
        for(int i=0;i<bulbs.size();i++){
            m1[bulbs[i]]++;
        }
        for(auto const&[key,value]:m1){
            if(value % 2 != 0){
                ans.push_back(key);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};