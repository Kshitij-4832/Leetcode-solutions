/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1};
        vector<int> criticalpoints;
        if (head->next->next == NULL) {
            return ans;
        }
        int itr = 2;
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* Next = head->next->next;
        while (curr->next != NULL) {
            if (curr->val > prev->val && curr->val > Next->val ||
                curr->val < prev->val && curr->val < Next->val) {
                criticalpoints.push_back(itr);
            }
            itr++;
            curr = curr->next;
            prev = prev->next;
            Next = Next->next;
        }
        sort(criticalpoints.begin(), criticalpoints.end());
        int size = criticalpoints.size();
        if (size >= 2) {
            ans[0] = INT_MAX;
            ans[1] = criticalpoints[size - 1] - criticalpoints[0];
            for (int i = 0; i < size - 1; i++) {
                ans[0] =
                    min(ans[0], abs(criticalpoints[i + 1] - criticalpoints[i]));
            }
        }
        return ans;
    }
};