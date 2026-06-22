class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0],size=arr.size();
        for(int i=0;i<size-1;i++){
            if(arr[i+1]-arr[i]!=d){
                return false;
            }
        }
        return true;
    }
};