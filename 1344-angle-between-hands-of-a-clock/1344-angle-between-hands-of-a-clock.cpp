class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a = minutes*6;
        double b = 0;
        double movement = 0.5*minutes;
        if(hour!=12){  
            b = hour*30;
        }
        double ans = abs(a-b-movement);
        if(ans>180){
            return 360-ans;
        }
        return ans;
    }
};