class Solution {
public:
    int minimumPushes(string word) {
        int push = 0;
        int n = word.length();
        if(word.length() <= 8){
            push += n;
        }
        else if(n <= 16 && n > 8 ){
            push = 8 + (2*(n-8));
        }
        else if(n <= 24 && n > 16){
            push = 24 + (3*(n-16));
        }
        else if(n <= 26 && n > 24){
            push = 48 + (4*(n-24));
        }
        return push;
    }
};