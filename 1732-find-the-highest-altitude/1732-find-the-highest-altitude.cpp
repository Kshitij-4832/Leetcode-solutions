class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size = gain.size(),max = INT_MIN,curr=0;
        for(int i =0;i<size;i++){
            curr = curr+gain[i];
            if(curr>max){
                max = curr;
            }
        }
        if(max<0){
            return 0;
        }
        return max;
    }
};