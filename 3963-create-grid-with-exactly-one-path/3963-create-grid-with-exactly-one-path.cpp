class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid;
        for(int i=0;i<m;i++){
            string ans = "";
            for(int j =0;j<n;j++){
                if(i != 0 && j != n-1){
                    ans+="#";
                }
                else{
                    ans+=".";
                }
            }
            grid.push_back(ans);
        }
        return grid; 
    }
};