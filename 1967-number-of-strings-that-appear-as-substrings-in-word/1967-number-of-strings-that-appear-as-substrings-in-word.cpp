class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0,size=patterns.size();
        for(int i=0;i<size;i++){
            if(word.find(patterns[i])<word.length()){
                count++;
            }
        }
        return count;
    }
};