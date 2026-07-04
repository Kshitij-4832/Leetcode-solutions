class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size(),count = 0;
        for(int i=1;i<size-1;i++){
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
            {
                count=1;
            }
            else if(arr[i]<=arr[i-1]&&arr[i]<=arr[i+1]){
                return false;
            }
        }
        if(count==1){
            return true;
        }
        return false;
    }
};