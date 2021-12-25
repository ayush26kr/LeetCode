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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int v=0,c=0;
        int sum;
        //Create a dummy
        ListNode dummy(0);
        ListNode* p=&dummy;
        while(l1!=NULL||l2!=NULL){
            sum=c;
            if(l1)
                sum+=l1->val;
            
            if(l2)
                sum+=l2->val;
            
            if(sum>9){
                v=sum%10;
                c=sum/10;
            }
            else{
                c=0;
                v=sum;
            }
            //assign v (value) to newly created node
            p->next=new ListNode(v);
            p=p->next;
            //if l1 and l2 are empty or not
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
            
        }
        if(c)
            p->next=new ListNode(c);
        return dummy.next;     
    }
};
