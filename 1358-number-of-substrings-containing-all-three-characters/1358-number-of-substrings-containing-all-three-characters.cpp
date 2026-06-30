class Solution {
public:
    int numberOfSubstrings(string s) {
        int arr []= {-1,-1,-1};
        int size =  s.length();
        int ans = 0;
        for(int i =0;i<size;i++){
            if(s[i]=='a'){
                arr[0] = i;
            }
            if(s[i]=='b'){
                arr[1] = i;
            }
            if(s[i]=='c'){
                arr[2] = i;
            }
            if(arr[0]!=-1&&arr[1]!=-1&&arr[2]!=-1){
                ans = ans+min({arr[0],arr[1],arr[2]})+1;
            }
        }
        return ans;
    }
};