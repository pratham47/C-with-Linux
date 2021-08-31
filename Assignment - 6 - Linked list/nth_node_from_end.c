struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    int c = 0;
    struct ListNode *ptr = head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        c++;
    }
    if(n>c)
    {
        return NULL;
    }
    if(n==c)
    {
        return head->next;
    }
    struct ListNode *ptr1,*ptr2,*ptr3;
    ptr1=head;
    ptr2=head;
    ptr3=head;
    int i=0;
    while(i<n)
    {
        ptr1=ptr1->next;
        i++;
    }
    while(ptr1!=NULL)
    {
        ptr3=ptr2;
        ptr2=ptr2->next;
        ptr1=ptr1->next;
    }
    ptr3->next=ptr2->next;
    return head;
}