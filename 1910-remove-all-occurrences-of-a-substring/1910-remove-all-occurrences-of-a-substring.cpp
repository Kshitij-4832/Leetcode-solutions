class Solution {
public:
    string removeOccurrences(string s, string part) {
        int size =  s.length();
        while(s.find(part)<s.length()){
            int start = s.find(part);
            s.erase(start,part.length());
        }
        return s;
    }
};