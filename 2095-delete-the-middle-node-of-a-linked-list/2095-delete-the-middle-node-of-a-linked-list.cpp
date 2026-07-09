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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;
        ListNode *temp = head;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        if(size==1){
            return NULL;
        }
        size = (size/2)-1;

        temp = head;
        for(int i = 0;i<size;i++){
            temp = temp->next;
        }

        ListNode *ptr = temp->next->next;
        temp->next = ptr;
        ptr = NULL;
        return head;         
    }
};