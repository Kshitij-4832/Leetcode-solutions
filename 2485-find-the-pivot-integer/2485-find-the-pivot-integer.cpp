class Solution {
public:
    int pivotInteger(int n) {
        int x=0,sum=((n+1)*n)/2;
        /*for(int i=1;i<=n;i++){
            sum = sum+i;
            for(int j=i;j<=n;j++){
                x = x+j;
            }
            if(x==sum){
                return i;
            }
            x = 0;
        }
        return -1;*/
        //Above commented part is the brute force approach of this question
        x = sqrt((n*(n+1)/2));
        if(sum==x*x){
            return x;
        }
        return -1;
    }
};