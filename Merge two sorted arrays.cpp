class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* p=&dummy;
        int v;
        while(list1||list2){
            if(!list1)
                return list2;
            if(!list2)
                return list1;
            if(list1->val<list2->val){
                v=list1->val;
                p->next=new ListNode(v);
                p=p->next;
                if(list1)
                    list1=list1->next;
            }
            else if(list1->val>list2->val){
                v=list2->val;
                p->next=new ListNode(v);
                p=p->next;
                if(list2)
                    list2=list2->next;
            }
            else{
                p->next=new ListNode(list1->val);
                p=p->next;
                p->next=new ListNode(list2->val);
                p=p->next;
                if(list1)
                list1=list1->next;
                if(list2)
                list2=list2->next;
                }
            }
        return dummy.next;
    }
};
