struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
{
  struct ListNode *ptr1;
  struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = head;
    ptr1 = dummy;
    for (int i = 0; i < left-1; i++)
    {
        ptr1 = ptr1->next;
    }
    struct ListNode *h = ptr1->next, *cur;
    cur = h;
    struct ListNode *end = NULL;
    for (int i = 0; i < right-left+1; i++) 
    {
       struct ListNode *nxt = cur->next;
        cur->next = end;
        end = cur;
        cur = nxt;
    }
    h->next = cur;
    ptr1->next = end;
    struct ListNode *temp = dummy->next;
    free(dummy);
    return temp;
    
}