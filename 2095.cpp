// vineet kukreti : this is a quite good solution as 
// as i checked other solution they have used fast and slow pointer 
// it is taking to much space and it's taking to much time for execution
// 60 % + 60% = space + time
class Solution {
public:
    int length(ListNode *head)
    {
        ListNode *p = head;
        int len = 0;
        while(p!=NULL)
        {
            len++;
            p = p->next;
        }
        return len;
    }
    ListNode* deleteMiddle(ListNode* head) {
        int n = length(head)/2 +1;
        ListNode *p = head;
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        ListNode *q = NULL;
        int i = 1;
        while(i!=n)
        {
            q = p;
            p = p->next;
            i++;
        }
        q->next = p->next;
        delete p;
        return head;
    }
};