class Solution {
public:
    int nthUglyNumber(int n) {
        int p2=0,p3=0,p5=0;
        vector<int>ans;
        ans.push_back(1);
        for(int i=1;i<=n;i++){
            int next_2 = ans[p2] * 2;
            int next_3 = ans[p3] * 3;
            int next_5 = ans[p5] * 5;

            int next_ugly = min({next_2,next_3,next_5});
            ans.push_back(next_ugly);

            if(next_ugly == next_2) p2++;
            if(next_ugly == next_3) p3++;
            if(next_ugly == next_5) p5++;
        }
        return ans[n-1];
    }
};