class Solution {
public:
    int dayOfYear(string date) {
       int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
       string syear = "";
       string smonth = "";
       string sday = "";
       syear[0] = date[0],syear[1]=date[1],syear[2]=date[2],syear[3] = date[3];
       smonth[0] = date[5],smonth[1]=date[6];
       sday[0]=date[8],sday[1]=date[9];
       int year =  stoi(syear),month=stoi(smonth),day=stoi(sday);
        int ans = day;
        if(year%4==0){
            days[1] = 29;
        }
        if (year==1900){
            days[1] = 28;
        }
       for(int i=0;i<month-1;i++){
        ans  = ans+days[i];
       }

        return ans;

    }
};