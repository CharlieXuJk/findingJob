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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) 
            return head;
        stack<ListNode*> st;
        ListNode* temp;
        ListNode* a=head;
        while(a!=nullptr){
            st.push(a);
            a=a->next;
        }
        a=st.top();
        while(!st.empty()){
            temp = st.top();
            st.pop();
            if(st.empty()){
                temp->next = nullptr;
            }else{
                temp->next = st.top();
            }
        }
        return a;
    }
};