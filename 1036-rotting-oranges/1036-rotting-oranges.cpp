class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> drow = {-1,0,1,0};
        vector<int> dcol = {0,1,0,-1};

        queue<pair<pair<int, int>,int>> q;
        int fresh = 0;

        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        int max_time = 0;

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            q.pop();

            max_time = max(max_time,time);

            for(int i=0;i<4;i++){
                int rnew = row + drow[i];
                int cnew = col + dcol[i];

                if(rnew >= 0 && rnew < m && cnew >= 0 && cnew < n && grid[rnew][cnew] == 1){
                    grid[rnew][cnew] = 2;
                    fresh--;
                    q.push({{rnew,cnew},time+1});
                }
            }
        }
        if(fresh > 0){
            return -1;
        }
        return max_time;
    }
};