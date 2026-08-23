class Solution {
public:
    bool sumGame(string num) {
        int lsum = 0,rsum = 0,lq = 0,rq = 0;
        int s = num.length()/2;
        for(int i=0;i<s;i++){
            if(num[i] != '?'){
                lsum += (num[i]-'0');
            }
            else{
                lq++;
            }
        }
        for(int i=s;i<num.length();i++){
            if(num[i] != '?'){
                rsum += (num[i]-'0');
            }
            else{
                rq++;
            }
        }
        int sum_diff = lsum - rsum;
        int ques_diff = rq - lq; 
        
        if (ques_diff % 2 == 0 && sum_diff == (ques_diff / 2) * 9) {
            return false; 
        }
        return true;
    }
};