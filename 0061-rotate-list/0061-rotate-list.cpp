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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        k = k%size;

        if (k == 0) {
            return head;
        }
        temp = head;
        // Reversing entire list
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        head = prev;
        ListNode* imp = head;
        // reversing the first half
        prev = NULL;
        Next = NULL;
        curr = head;
        while (k != 0) {
            if (k - 1 == 0) {
                temp = curr->next;
            }
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            k--;
        }

        ListNode* newhead = prev;
        //  reversing the second half
        prev = NULL;
        Next = NULL;
        curr = temp;
        while (curr != 0) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        imp->next = prev;
        return newhead;
    }
};