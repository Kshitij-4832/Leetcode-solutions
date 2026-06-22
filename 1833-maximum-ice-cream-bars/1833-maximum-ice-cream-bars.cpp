class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int size =  costs.size(),count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;(i<size&&coins>=0);i++){
            if(costs[i]<=coins){
                coins = coins-costs[i];
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};