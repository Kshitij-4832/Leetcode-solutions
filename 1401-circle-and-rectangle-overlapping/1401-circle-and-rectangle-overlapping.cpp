class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1,
                      int x2, int y2) {
        int closex = 0, closey = 0;
        if (x1 > xCenter) {
            closex = x1;
        } else if (x2 < xCenter) {
            closex = x2;
        } else {
            closex = xCenter;
        }

        if (y1 > yCenter) {
            closey = y1;
        } else if (y2 < yCenter) {
            closey = y2;
        } else {
            closey = yCenter;
        }

        if((xCenter-closex)*(xCenter-closex)+(yCenter-closey)*(yCenter-closey)<=radius*radius){
            return true;
        }
        return false;
    }
};