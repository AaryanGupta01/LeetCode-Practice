class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<char,int>m1;
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string res = "";
            for(char c:words[i]){
                m1[c]++;
            }
            for(const auto&[key,val]:m1){
                res += key;
            }
            ans.push_back(res);
            m1.clear();
        }
        int count = 0;
        for(int i=0;i<ans.size();i++){
            if(i+1 <ans.size()){
                for(int j = i+1;j<ans.size();j++){
                    sort(ans[j].begin(),ans[j].end());
                    sort(ans[i].begin(),ans[i].end());
                    if(ans[j] == ans[i]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};