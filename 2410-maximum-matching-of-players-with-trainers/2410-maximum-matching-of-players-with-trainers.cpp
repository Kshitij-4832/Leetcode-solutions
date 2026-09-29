class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int trainers_count = trainers.size(), players_count = players.size();
        int i = 0, j = 0,count = 0;
        while (j < trainers_count && i < players_count) {
            if(players[i]<=trainers[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};