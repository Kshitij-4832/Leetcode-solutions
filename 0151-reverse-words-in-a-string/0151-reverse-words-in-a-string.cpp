class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        s = s+" ";
        int size = s.length(),j = 0;
        for(int i = 0;i<size;i++){
            if(s[i]==' '){
                continue;
            }else{
                string temp = "";
                while(s[i]!=' '&&i!=size-1){
                    temp = temp+""+s[i];
                    i++;
                }
                words.push_back(temp);
            }
        }
        s = "";
        for(int i=words.size()-1;i>=0;i--){
            s = s+""+words[i];
            if(i!=0){
                s = s+" ";
            }
        }
        return s;
    }
};