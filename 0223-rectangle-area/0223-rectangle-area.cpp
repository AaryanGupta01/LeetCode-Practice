class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int lr = ax2 - ax1;
        int lb = ay2 - ay1;
        int r1 = lr*lb;
        int lr2 = bx2-bx1;
        int lb2 = by2-by1;
        int r2 = lr2*lb2;
        int area = r1+r2;

        int ul = max(0,min(ax2,bx2) - max(bx1,ax1));
        int ub = max(0,min(by2,ay2) - max(ay1,by1));
        int ma = ul*ub;
        return area - ma; 
    }
};