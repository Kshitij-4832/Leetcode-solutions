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
    ListNode* mergeInBetween(ListNode* head1, int a, int b, ListNode* head2) {
        ListNode* tail2 = head2;
        while(tail2->next!=NULL){
            tail2 = tail2->next;
        }
        ListNode* start_point = head1;
        ListNode* end_point = head1;
        while(a-1>0){
            start_point = start_point->next;
            a--;
        }
        while(b+1>0){
            end_point = end_point->next;
            b--;
        }
        start_point->next = head2;
        tail2->next = end_point;
        return head1;

    }
};