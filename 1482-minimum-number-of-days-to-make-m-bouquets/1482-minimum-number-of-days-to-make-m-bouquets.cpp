class Solution {
public:
    int minDays(vector<int>& bloomDay, long long int m, long long int k) {
        int Max = INT_MIN, Min = INT_MAX;
        int size = bloomDay.size();
        for (int i = 0; i < size; i++) {
            Max = max(Max, bloomDay[i]);
            Min = min(Min, bloomDay[i]);
        }
        long long int pro = m*k;
        if(pro>bloomDay.size()){
            return -1;
        }
        int left = Min, right = Max;
        while (left <= right) {
            int mid = (left + right) / 2, count = 0,No_of_Bouquets = 0;
            for (int i = 0; i < size; i++) {
                if(bloomDay[i]<=mid){
                    count++;
                }
                else{
                    No_of_Bouquets += count/k; 
                    count = 0;
                }
            }
            No_of_Bouquets += count/k;
            if(No_of_Bouquets>=m){
                right  = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};