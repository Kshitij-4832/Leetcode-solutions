class Solution {
public:
    string processStr(string s) {
        string result = "";
        int size =  s.length();
        for(int i=0;i<size;i++){
            if(iswalnum(s[i])){
                result =result+ s[i];
            }
            else if(s[i]=='#'&&result.length()){
                result = result+result;
            }
            else if(s[i]=='*'&&result.length()>0){
                result.pop_back();
            }
            else if(s[i]=='%'&&result.length()>0){
                reverse(result.begin(),result.end());
            }
        }
        return result;
    }
};