class Solution {
public:
    string reversePrefix(string word, char ch) {
        int size =  word.length(),start=0,end=0;
        for(int i=0;i<size;i++){
            if(word[i]==ch){
                start = 0,end=i;
                while(start<=end){
                    swap(word[start],word[end]);
                    start++;
                    end--;
                }
                return word;
            }
        }
        return word;
    }
};