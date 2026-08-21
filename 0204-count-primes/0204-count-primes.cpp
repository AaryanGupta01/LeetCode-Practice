class Solution {
public:
    int countPrimes(int n) {
        int count = 1;
        if(n <= 2){
            return 0;
        }
        vector<char>prim(n,true);
        for(int i=3;i*i<n;i+=2){
            if(prim[i]){
                for(int j = i*i;j<n;j+=i*2){
                    prim[j] = false;
                }
            }
        }
        for(int i=3;i<n;i+=2){
            if(prim[i] == true){
                count++;
            }
        }
        return count;
    }
};