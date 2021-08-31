struct ListNode* deleteDuplicates(struct ListNode* head)
{
 struct ListNode* before_head = malloc(sizeof(struct ListNode));
    before_head->next = head;
    struct ListNode* ptr1 = before_head;
    struct ListNode* ptr2 = head;
    while(ptr2!=NULL)
    {
        bool should_del = false;
        while(ptr2->next!=NULL && ptr2->val == ptr2->next->val)
        {
            should_del = true;
            ptr2 = ptr2->next;
        }
        if(should_del)
            ptr1->next = ptr2->next;
        else
            ptr1 = ptr1->next;

        ptr2 = ptr1->next;
    }
    return before_head->next;
}