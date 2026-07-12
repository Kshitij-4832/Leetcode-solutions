class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int size = arr.size(),max=-1;
        for(int i=0;i<size;i++){
            mpp[arr[i]]++;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==mpp[arr[i]]){
                int temp = arr[i];
                if(temp>max){
                    max = temp;
                }
            }
        }
        return max;
    }
};