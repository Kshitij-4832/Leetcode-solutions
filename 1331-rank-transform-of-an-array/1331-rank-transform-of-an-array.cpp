class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int size = arr.size();
        vector<int> copy(size, 0);
        for (int i = 0; i < size; i++) {
            copy[i] = arr[i];
        }
        sort(copy.begin(), copy.end());
        unordered_map<int, int> mpp;
        int k = 1;
        for (int i = 0; i < size; i++) {
            if(mpp.find(copy[i])==mpp.end()){
                mpp[copy[i]] = k;
                k++;
            }
        }
        for (int i = 0; i < size; i++) {
            if (mpp.find(arr[i]) != mpp.end()) {
                arr[i] = mpp[arr[i]];
            }
        }
        return arr;
    }
};