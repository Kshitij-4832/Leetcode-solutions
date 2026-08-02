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
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            size++;
        }
        int pos = size - k;
        ListNode* t1 = head;
        ListNode* t2 = head;
        for (int i = 0; i < k - 1; i++) {
            t1 = t1->next;
        }
        for (int i = 0; i < pos; i++) {
            t2 = t2->next;
        }
        swap(t1->val,t2->val);

        return head;
    }
};