class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int size =  text.size(),b=0,a=0,l=0,o=0,n=0;
        for(int i=0;i<size;i++){
            if(text[i]=='b'){
                b = b+1;
            }
            else if(text[i]=='a'){
                a = a+1;
            }
            else if(text[i]=='l'){
                l = l+1;
            }
            else if(text[i]=='o'){
                o = o+1;
            }
            else if(text[i]=='n'){
                n = n+1;
            }
        }   
        return min({a,b,l/2,o/2,n});
    }
};