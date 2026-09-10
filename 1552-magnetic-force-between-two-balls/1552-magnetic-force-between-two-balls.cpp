class Solution {
public:
    bool canweplace(vector<int>& position, int m, int force) {
        int mcount = 1, pos = position[0];
        for (int i = 1; i < position.size(); i++) {
            if (position[i] - pos >= force) {
                mcount++;
                pos = position[i];
            }
            if (mcount >= m) {
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int size = position.size();
        int left = 0, right = position[size - 1] - position[0];
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canweplace(position, m, mid)) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
};