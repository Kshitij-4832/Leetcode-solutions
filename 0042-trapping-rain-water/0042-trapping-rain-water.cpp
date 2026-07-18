class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> maxleft(size, 0);
        vector<int> maxright(size, 0);

        for (int i = 1; i < size; i++) {
            maxleft[i] = max(maxleft[i - 1], height[i - 1]);
        }
        for (int i = size - 2; i >= 0; i--) {
            maxright[i] = max(maxright[i + 1], height[i + 1]);
        }
        int ans = 0;

        for (int i = 0; i < size; i++) {
            if (min(maxleft[i], maxright[i]) - height[i] >= 0) {
                ans += min(maxleft[i], maxright[i]) - height[i];
            }
        }
        return ans;
    }
};