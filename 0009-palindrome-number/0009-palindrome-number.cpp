class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x==0)
        return true;       
       int copy =x;
       long int rev = 0;
       copy  =x;
       while(copy!=0){
        int b =  copy%10;
        rev =  rev*10+b;
        copy= copy/10;
       }
       if(rev==x){
        return true;
       }
       return false;

    }
};