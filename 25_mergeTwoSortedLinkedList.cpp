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
    ListNode* mergeRecur(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr){
            return nullptr;
        }else if(l1 == nullptr){
            l2->next = mergeRecur(l1, l2->next);
            return l2;
        }else if(l2 == nullptr){
            l1->next = mergeRecur(l1->next, l2);
            return l1;
        }else if(l1->val <= l2->val){
            l1->next = mergeRecur(l1->next, l2);
            return l1;
        }else if(l1->val > l2->val){
            l2->next = mergeRecur(l1, l2->next);
            return l2;
        }
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = mergeRecur(l1,l2);
        return dummy->next;
    }
};