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
    ListNode* partition(ListNode* head, int x) {
        ListNode* list1=new ListNode(0); //for values < x
        ListNode* list2=new ListNode(0); //for values >=x
        
        ListNode* small=list1;
        ListNode* greater=list2;
        
        
        while(head){
            if(head->val<x){
                small->next=head;
                small=small->next;
            }
            else {  //head->val>=x
                greater->next=head;
                greater=greater->next;
            }
            head=head->next;
        }
        
        //Now combine both the lists and give Null to end of second list
        greater->next=NULL;
        small->next=list2->next;
        
        return list1->next;
        
    }
};
