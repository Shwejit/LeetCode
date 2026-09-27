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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* left=list1;
        ListNode* right=list2;

        ListNode* newlisthead = new ListNode;
        ListNode* newlist=newlisthead;

        while(left!=nullptr && right!=nullptr){
            if(left->val<=right->val){
                newlist->next=left;
                left=left->next;
            }
            else{
                newlist->next=right;
                right=right->next;
            }
            newlist=newlist->next;
        }
        while(left!=nullptr){
            newlist->next=left;
            left=left->next;
            newlist=newlist->next;
        }
        while(right!=nullptr){
            newlist->next=right;
            right=right->next;
            newlist=newlist->next;
        }
        return newlisthead->next;
    }
};