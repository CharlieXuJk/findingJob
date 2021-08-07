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
    ListNode* findKthToTail(ListNode* pListHead, int k) {
        ListNode *fast = pListHead;
        ListNode *slow = pListHead;
        for(auto i = 0; i < k; i++){
            if(fast == nullptr){
                return nullptr;
            }
            fast = fast->next;
        }
        while(fast!=nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};