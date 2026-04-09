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
    ListNode* middleNode(ListNode* head) {
        // ListNode* curr=head;
        // int index=1;
        // while(curr->next){
        //     curr=curr->next;
        //     index++;
        // }
        // int i=1;
        // ListNode* c=head;
        // while(i<(index/2)+1){
        //     c=c->next;
        //     i++;
        // }

        // return c;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};