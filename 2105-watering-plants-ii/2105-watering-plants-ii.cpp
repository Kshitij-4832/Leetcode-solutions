class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int size = plants.size(),start = 0,end = size-1;
        int count = 0,a = capacityA,b=capacityB;
        while(start<=end){
            if(start==end){
                if(b>=plants[start]&&a<=plants[start]){
                    b = b-plants[start];
                }
                else if(a>=plants[start]){
                    a = a-plants[start];
                }
                else{
                    count++;
                }
                break;
            }
            if(a<plants[start]){
                a = capacityA;
                count++;
            }if(a>=plants[start]){
                a = a-plants[start];
                start++;
            }
              if(b<plants[end]){
                b = capacityB;
                count++;
            }
            if(b>=plants[end]){
                b = b-plants[end];
                end--;
            }
        }
        return count;
    }
};