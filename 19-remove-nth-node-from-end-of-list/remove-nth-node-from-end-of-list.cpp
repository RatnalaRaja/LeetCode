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
    int lengthy(ListNode* head){
          int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL )return head;
        int c=lengthy(head);
        int res=c-n;
        if (res == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* temp=head;
       while (res--) {
        if (res == 0) {
            break;
        }
        temp = temp->next;
    }
         ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete (delNode);
        return head;

    }
};