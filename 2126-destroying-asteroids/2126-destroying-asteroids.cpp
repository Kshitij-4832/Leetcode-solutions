class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long int sum = mass;
        sort(asteroids.begin(), asteroids.end());
        int size = asteroids.size();
        for (int i = 0; i < size; i++) {
            if (asteroids[i] > sum) {
                return false;
            } else {
                sum = sum + asteroids[i];
            }
        }
        return true;
    }
};