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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* dummy = new ListNode();
        ListNode* prevNode = dummy;
        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {
            prevNode->next = curr->next;
            curr->next = prevNode->next->next;
            prevNode->next->next = curr;

            prevNode = curr;
            curr = curr->next;
        }
        return dummy->next;
    }
};