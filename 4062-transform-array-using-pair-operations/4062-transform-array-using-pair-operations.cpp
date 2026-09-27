class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long int x1 = 0,x2 = 0;
        for(int i:source){
            x1 = x1+i;
        }
        for(int i:target){
            x2 = x2+i;
        }
        if(x1==x2){
            return true;
        }
        return false;
    }
};