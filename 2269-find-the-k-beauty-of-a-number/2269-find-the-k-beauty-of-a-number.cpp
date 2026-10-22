class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string n = to_string(num);
        int cnt = 0;
        int j =0;
        for(int i=0;i<n.length();i++){
            string s="";
            j = i;
            while((j < i+k) && ((i+k) <= n.length())){
                s+=n[j++];
            }
            if(s.length() < k){
                continue;
            }
            int no = stoi(s);
            cout << no << " ";
            if(no == 0){
                continue;
            }
            else if(num % no == 0){
                cnt++;
            }
        }
        return cnt;
    }
};