class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        for(int num:nums){
            m1[num]++;
        }

        int i=1;
        for(const auto&[key,val]:m1){
            if(!m1.count(k*i)){
                return k*i;
            }
            else{
                i++;
            }
        }
        return k*i;
    }
};