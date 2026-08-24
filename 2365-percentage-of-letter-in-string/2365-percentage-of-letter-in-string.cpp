class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        int n = s.length();
        for(char c:s){
            if(c == letter)
                count++;
        }   
        return round((count*100)/n);
    }
};