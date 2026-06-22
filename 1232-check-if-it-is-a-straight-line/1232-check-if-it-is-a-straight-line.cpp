class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int s1 = coordinates.size();
        //Approach -01
        /*double x1 = (double)coordinates[0][0], y1=(double)coordinates[0][1];
        double x2=(double)coordinates[1][0], y2=(double)coordinates[1][1];
        double slope = 0;
        if(x2-x1==0){
            slope = std::numeric_limits<double>::max();
        }
        else{
            slope = (y2-y1)/(x2-x1);
        }
        for(int i=1;i<s1;i++){
            double deltay=(coordinates[i][1]-y1),deltax=(coordinates[i][0]-x1);
            double curr_slope = 0;
            if(deltax==0){
                curr_slope = std::numeric_limits<double>::max();
            }
            else{
                curr_slope = deltay/deltax;
            }
            if(curr_slope!=slope){
                return false;
            }
        }
        return true;*/
        //Approach -02--Cross Product
        int x1 = coordinates[0][0],x2=coordinates[1][0];
        int y1 = coordinates[0][1],y2 = coordinates[1][1];

        for(int i= 2;i<s1;i++){
            int x = coordinates[i][0],y=coordinates[i][1];
            if((y2-y1)*(x-x1)!=(x2-x1)*(y-y1)){
                return false;
            }
        }
        return true;


    }
};