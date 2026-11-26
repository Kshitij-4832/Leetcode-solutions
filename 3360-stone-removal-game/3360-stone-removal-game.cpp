class Solution {
public:
    bool canAliceWin(int n) {
        int win = -1;
        int itr = 10;
        bool turn  =true;
        while (n >= itr) {
            if(turn){
                n = n-itr;
                itr--;
                turn = false;
                win = 1;
            }
            else{
                n = n-itr;
                itr--;
                turn  =  true;
                win  = -1;
            }
        }
        if(win==-1){
            return false;
        }
        return true;
    }
};