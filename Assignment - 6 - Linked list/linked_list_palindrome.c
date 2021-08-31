struct ListNode *reverse(struct ListNode *slow)
{
    struct ListNode *ptr1,*ptr2,*ptr3;
    ptr1=slow;
    ptr2=NULL;
    while(ptr1!=NULL)
    {ptr3=ptr1->next;
    ptr1->next=ptr2;
    ptr2=ptr1;
    ptr1=ptr3;
    }
    return ptr2;
    
}

bool isPalindrome(struct ListNode* head)
{
 struct ListNode *ptr1,*ptr2;
 ptr1=head;
 ptr2=head;
 while(ptr1!=NULL&&ptr1->next!=NULL)
 {
     ptr2=ptr2->next;
     ptr1=ptr1->next->next;
 }
 ptr1=head;
 ptr2=reverse(ptr2);
 while(ptr2!=NULL)
 {
     if(ptr1->val!=ptr2->val)
     {
         return false;
     }
     ptr1=ptr1->next;
     ptr2=ptr2->next;
}
    return true;
}