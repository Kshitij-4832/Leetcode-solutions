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
    ListNode* partition(ListNode* head, int x) {
        ListNode* leftdummy = new ListNode(-1);
        ListNode* rightdummy = new ListNode(-1);
        ListNode* leftcurr = leftdummy;
        ListNode* rightcurr = rightdummy;


        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val<x){
                leftcurr->next = temp;
                leftcurr = temp;
            }
            else{
                rightcurr->next = temp;
                rightcurr = temp;
            }
            temp = temp->next;
        }
        rightcurr->next = NULL;
        leftcurr->next = rightdummy->next;
        return leftdummy->next; 
    }
};