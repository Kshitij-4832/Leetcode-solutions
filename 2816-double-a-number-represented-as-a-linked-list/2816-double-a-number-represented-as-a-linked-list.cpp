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
    ListNode* reverse(ListNode* head) {
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
        return head;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        ListNode* temp = head;
        int pro = 0, carry = 0;
        while (temp != NULL) {
            pro = carry + (2 * (temp->val));
            temp->val = pro % 10;
            carry = pro / 10;
            temp = temp->next;
        }
        head = reverse(head);
        if (carry != 0) {
            ListNode* newNode = new ListNode(carry);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};