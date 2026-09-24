class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int contentchildren = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int size = s.size(),leftptr = 0;
        for(int i = 0;i<size&&leftptr<g.size();i++){
            if(s[i]>=g[leftptr]){
                contentchildren++;
                leftptr++;
            }
        }
        return contentchildren;
    }
};