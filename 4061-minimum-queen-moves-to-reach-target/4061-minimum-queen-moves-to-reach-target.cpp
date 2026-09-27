class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        if(source[0]==target[0]&&source[1]==target[1]){
            return 0;
        }
        int d1 = abs(source[0]-target[0]);
        int d2 =abs(source[1]-target[1]);
        if(d1==d2||source[1]-target[1]==0||source[0]-target[0]==0){
            return 1;
        }
        return 2;
    }
};