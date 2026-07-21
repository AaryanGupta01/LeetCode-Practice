class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int m,x1,y1,x2,y2;
        bool line = true;

        x1 = coordinates[0][0];
        y1 = coordinates[0][1];

        x2 = coordinates[1][0];
        y2 = coordinates[1][1];

        for(int i=2;i<coordinates.size();i++){
            int cur_x = coordinates[i][0];
            int cur_y = coordinates[i][1];
            if((cur_x - x1)*(y2-y1) != (x2-x1)*(cur_y-y1)){
                line = false;
            }
        }
        return line;
    }
};