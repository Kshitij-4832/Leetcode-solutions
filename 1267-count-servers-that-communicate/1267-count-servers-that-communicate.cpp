class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                    //Row check
                    bool check = false;
                    for(int k = 0;k<m;k++){
                        if(k==j){
                            continue;
                        }
                        if(grid[i][k]==1){
                            count++;
                            check = true;
                            break;
                        }
                    }
                    //Col check
                    for(int k = 0;k<n&&!check;k++){
                        if(k==i){
                            continue;
                        }
                        if(grid[k][j]==1){
                            count++;
                            check = true;
                            break;
                        }
                    }
                    
                }
            }
        }
        return count;
    }
};