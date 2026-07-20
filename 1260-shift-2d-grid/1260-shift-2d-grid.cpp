class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        // Observation-> This question can be transformed into rotate array k
        // times.
        int s1 = grid.size();
        int s2 = grid[0].size();
        if (s1 * s2 == 1) {
            return grid;
        }
        while (k > s1*s2) {
            k = k % (s1*s2);
        }
        vector<int> arr(s1 * s2, 0);
        int itr = 0;
        for (int i = 0; i < s1; i++) {
            for (int j = 0; j < s2; j++) {
                arr[itr] = grid[i][j];
                itr++;
            }
        }
        int start = 0, end = (s1 * s2) - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        start = 0, end = k - 1;
        while (start <= end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        start = k, end = (s1 * s2) - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        itr = 0;
        for (int i = 0; i < s1; i++) {
            for (int j = 0; j < s2; j++) {
                grid[i][j] = arr[itr];
                itr++;
            }
        }
        return grid;
    }
};