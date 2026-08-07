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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> data;
        if (head == NULL || head->next == NULL || head->next->next == NULL) {
            return head;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = temp1->next;
        while (temp1->next != NULL && temp1->next->next != NULL) {
            data.push_back(temp1->val);
            temp1 = temp1->next->next;
        }
        data.push_back(temp1->val);
        while (temp2->next != NULL && temp2->next->next != NULL) {
            data.push_back(temp2->val);
            temp2 = temp2->next->next;
        }
        data.push_back(temp2->val);
        ListNode* itr = head;
        for (int i : data) {
            itr->val = i;
            itr = itr->next;
        }
        return head;
    }
};