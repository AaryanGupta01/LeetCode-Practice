class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        bool found = false;
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];

        for(int i=0;i<first.size();i++){
            if(first[i] == last[i]){
                ans += first[i];
                found = true;
            }
            else{
                break;
            }
        }
        if(found){
            return ans;
        }
        else{
            return "";
        }
    }
};