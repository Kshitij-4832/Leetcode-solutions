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
    ListNode* reverse(ListNode* list){
        ListNode* prev = NULL;
        ListNode* curr = list;
        ListNode* Next = NULL;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr =  Next;
        }
        return prev;
    }   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* dummynode =  new ListNode(-1);
        ListNode* curr = dummynode;
        int sum = 0,carry = 0;
        while(t1!=NULL||t2!=NULL){
            sum = carry;
            if(t1!=NULL){
                sum = sum+t1->val;
                t1 = t1->next;
            }
            if(t2!=NULL){
                sum = sum+t2->val;
                t2 = t2->next;
            }
            ListNode* newNode = new ListNode(sum%10);
            curr->next = newNode;
            curr = curr->next;
            carry = sum/10;
        }
        if(carry!=0){
            ListNode* newNode =  new ListNode(carry);
            curr->next = newNode;
            curr = curr->next;
        }
        
        dummynode = dummynode->next;
        dummynode = reverse(dummynode);
        return dummynode;

    }
};