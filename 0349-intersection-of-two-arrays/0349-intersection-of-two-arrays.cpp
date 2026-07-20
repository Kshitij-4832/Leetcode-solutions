class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size(), s2 = nums2.size();
        unordered_set<int> sets;
        for (int i = 0; i < s1; i++) {
            for (int j = 0; j < s2; j++) {
                if (nums1[i] == nums2[j]) {
                    sets.insert(nums1[i]);
                    break;
                }
            }
        }
        vector<int> ans;
        for (int p : sets) {
            ans.push_back(p);
        }
        return ans;
    }
};