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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            size++;
        }
        if (size == 1) {
            return NULL;
        }
        int pos = size - n - 1;
        temp = head;
        if (size == n) {
            head = head->next;
            temp = NULL;
            delete temp;
            return head;
        } else {
            for (int i = 0; i < pos; i++) {
                temp = temp->next;
            }
            ListNode* ptr = temp;
            ptr->next = temp->next->next;
            temp = temp->next;
            temp = NULL;
            delete temp;
        }
        return head;
    }
};