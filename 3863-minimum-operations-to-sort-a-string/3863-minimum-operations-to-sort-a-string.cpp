class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        bool sorted = true;
        for(int i = 0;i<n-1;i++){
            if(s[i]>s[i+1]){
                sorted = false;
            }
        }
        if(sorted){
            return 0;
        }
        if(n==2){
            return -1;
        }
        else{
            char mn = *min_element(s.begin(),s.end());
            char mx = *max_element(s.begin(),s.end());
            cout<<mn<<" "<<mx;
            if(mn==s[0]||mx==s[n-1]){
                return 1;
            }
            for(int i = 1;i<n-1;i++){
                if(mx==s[i]||mn==s[i]){
                    return 2;
                }
            }
        }
        return 3;
    }
};