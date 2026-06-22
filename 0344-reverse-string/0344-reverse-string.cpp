class Solution {
public:
    void reverseString(vector<char>& s) {
        int size =  s.size(),start=0,end=size-1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};