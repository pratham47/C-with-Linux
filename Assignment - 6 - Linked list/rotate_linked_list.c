struct ListNode* rotateRight(struct ListNode* head, int k)
{
    if(!head||!head->next||k==0) 
    {
        return head;
    }
    struct ListNode *ptr=head;
    int len=1;
    while(ptr->next!=NULL)
    {
        len++;
        ptr=ptr->next;
    }
    if(k==len)
    {
        return head;
    }
    if(k>len)
    {
        k=k%len;
    }
    ptr->next=head;
    int i=0;
    ptr=head;
    struct ListNode *ptr2;
    while(i<len-k&&ptr!=NULL)
    {
        ptr2=ptr;
        ptr=ptr->next;
        i++;
    }
    ptr2->next = NULL;
    
    return ptr;
}