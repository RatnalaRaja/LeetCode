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
        ListNode* temp1=list1;
        ListNode* temp2= list2;
        ListNode* demo=new ListNode(-1);
        ListNode* temp=demo;
        while(temp1!=NULL and temp2!=NULL){
            if(temp1->val<temp2->val){
                temp->next=temp1;
                temp=temp1;
                temp1=temp1->next;
            }
            else{
                temp->next=temp2;
                temp=temp2;
                temp2=temp2->next;
            }
        }
        if(temp1)temp->next=temp1;
        else temp->next=temp2;
        return demo->next;

    }
};