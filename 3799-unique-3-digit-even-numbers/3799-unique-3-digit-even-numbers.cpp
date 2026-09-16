class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>res;
        vector<int> pantry(10,0);
        for(int d:digits){
            pantry[d]++;
        }
        for(int i=100;i<=998;i+=2){
            int ones = i % 10;
            int tens = (i/10) % 10;
            int hun = i / 100;
            
            vector<int> temp = pantry;
            temp[ones]--;
            temp[tens]--;
            temp[hun]--;

            if(temp[ones] >= 0 && temp[tens] >= 0 && temp[hun] >= 0){
                res.push_back(i);
            }
        }
        return res.size();
    }
};