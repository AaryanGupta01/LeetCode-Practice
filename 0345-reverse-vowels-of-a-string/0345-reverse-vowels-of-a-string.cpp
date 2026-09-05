class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    } 
    string reverseVowels(string s) {
        int right = s.length()-1;
        int left = 0;
        while(left < right){
            if(left < right && !isVowel(s[left])){
                left++;
            }
            else if(left < right && !isVowel(s[right])){
                right--;
            }
            else{
                if(left < right){
                    swap(s[left],s[right]);
                    left++;
                    right--;
                }
            }
        }
        return s;
    }
};