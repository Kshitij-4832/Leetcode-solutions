class Solution {
public:
    int minimumPushes(string word) {
        int size =word.length(),ans=0;
        if(size<=8)
        {
            return size;
        }
        int count =0,k=1; 
        for(int i=0;i<size;i++){
            if(count<8){
                ans = ans+k;
            }
            count++;
            if(count==8){
                count =0;
                k++;
            }
        }
        return ans;
    }
};