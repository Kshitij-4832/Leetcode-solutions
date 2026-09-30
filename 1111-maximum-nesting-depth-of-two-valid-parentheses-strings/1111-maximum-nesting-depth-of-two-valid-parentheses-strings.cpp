class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth = 0, size = seq.length();
        vector<int> result;
        for (int i = 0; i < size; i++) {
            if (seq[i] == '(') {
                result.push_back(depth % 2);
                depth++;
            } else {
                depth--;
                result.push_back(depth % 2);
            }
        }
        return result;
    }
};