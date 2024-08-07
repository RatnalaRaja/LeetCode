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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return NULL;
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL or !st.empty()){
            if(temp->val!=st.top()){
                return false;
            }
            st.pop();
            temp=temp->next;
        }
     
        return true;
    }
};