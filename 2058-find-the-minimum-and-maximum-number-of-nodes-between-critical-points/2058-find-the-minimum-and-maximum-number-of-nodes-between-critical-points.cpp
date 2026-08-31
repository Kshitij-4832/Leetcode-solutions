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
        if (head->next->next == NULL) {
            return ans;
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* Next = head->next->next;
        int itr = 2;
        vector<int> cps;
        while (Next != NULL) {
            int x = curr->val, y = prev->val, z = Next->val;
            if (x > y && x > z || x < y && x < z) {
                cps.push_back(itr);
            }
            itr++;
            prev = prev->next;
            curr = curr->next;
            Next = Next->next;
        }
        int size = cps.size();
        if (size >= 2) {
            sort(cps.begin(),cps.end());
            ans[0] = INT_MAX;
            ans[1] = cps[size - 1] - cps[0];
            for(int i = 1;i<size;i++){
                ans[0] = min(ans[0],abs(cps[i]-cps[i-1]));
            }
        }
        return ans;
    }
};