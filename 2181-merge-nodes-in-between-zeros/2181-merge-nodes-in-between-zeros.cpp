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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* i = head->next;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        int sum = 0;
        while (i != NULL) {
            sum = sum + (i->val);
            i = i->next;
            if(i->val==0){
                ListNode* newNode = new ListNode(sum);
                temp->next = newNode;
                temp = temp->next;
                sum = 0;
                i = i->next;
            }
        }
        return dummy->next;
    }
};