struct ListNode *detectCycle(struct ListNode *head) 
{
    if(!head||!head->next)
    {
        return NULL;
    }
    struct ListNode *slow=head,*fast=head; 
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow!=fast)
    {
        return NULL;
    }
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}