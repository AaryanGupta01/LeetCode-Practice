class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        deque<string> q1;
        stringstream ss(s);
        string w;
        while(ss >> w){
            q1.push_front(w);
        }
        for(int i = 0;i<q1.size();i++){
            if(i == q1.size()-1){
                ans += q1[i];
            }
            else{
                ans += q1[i] + " ";
            }
        }
        return ans;
    }
};