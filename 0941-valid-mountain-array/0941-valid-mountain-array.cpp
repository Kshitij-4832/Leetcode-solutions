class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        bool check = false;
        for(int i=1;i<size-1;i++){
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
            {
                check  =true;
            }
            else if(arr[i]<=arr[i-1]&&arr[i]<=arr[i+1]){
                return false;
            }
        }
        return check;
    }
};