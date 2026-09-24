class Solution {
public:
    int count_vow(string word){
        int vow=0;
        for(char c:word){
            if(c == 'a' || c == 'e' || c == 'i' ||c == 'o' || c == 'u'){
                vow++;
            }
        }
        return vow;
    }

    string reverseWords(string s) {
        stringstream ss(s);
        string word,result="";
        ss >> word;
        result = result + word + " ";
        int vow = count_vow(word);
        while(ss >> word){
            if(count_vow(word) == vow){
                reverse(word.begin(),word.end());
            }
            result+=word+" ";
        }
        result.pop_back();
        return result;
    }
};