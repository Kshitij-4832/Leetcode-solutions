class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0] = 1;
        int size= arr.size();
        for(int i=1;i<size;i++){
            int diff= arr[i]-arr[i-1];
            if(diff>1){
                arr[i] = arr[i]-diff+1;
            }
        }
        return arr[size-1];
    }
};