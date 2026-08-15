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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        ListNode* curr = head->next;
        ListNode* prev = head;
        while(curr!=NULL){
            int data = gcd(curr->val,prev->val);
            ListNode* newNode = new ListNode(data);
            prev->next = newNode;
            newNode->next = curr;
            prev = prev->next->next;
            curr = curr->next;
        }
        return head;
    }
};