 struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
     if(l1 == NULL)
     {
         return l2;
     }
    if(l2 == NULL)
    {
        return l1;
    }
 
   struct ListNode *newlist = (struct ListNode*)malloc(sizeof(struct ListNode));
   struct ListNode *new = newlist;
    
    while ((l1 != NULL) && (l2 != NULL)) 
    {
        if (l1->val <= l2->val)
        {
            new->next = l1;
            l1 = l1->next;
        } 
        else 
        {
            new->next = l2;
            l2 = l2->next;
        }
        new = new->next;
     }
    if ((l1 == NULL) && (l2 != NULL))
    {
        new->next = l2;
    }
    else if ((l1 != NULL) && (l2 == NULL))
    {
        new->next = l1;
    }
    return newlist->next;
}
}
