/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* ans=NULL;
        bool check = false;

        while(fast!=NULL&&fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                check = true;
                slow = head;
                break;
            }
        }
        if(check==true){
            while(slow!=fast){
                slow =slow->next;
                fast = fast->next;
            }
            ans = slow;
        }
        return ans;
    }
};