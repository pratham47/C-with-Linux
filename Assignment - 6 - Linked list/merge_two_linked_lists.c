{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang16393{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 6.2.9200}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)\par
\{\par
     if(l1 == NULL)\par
     \{\par
         return l2;\par
     \}\par
    if(l2 == NULL)\par
    \{\par
        return l1;\par
    \}\par
    \par
    struct ListNode *newlist = (struct ListNode*)malloc(sizeof(struct ListNode));\par
;\par
    struct ListNode *new = newlist;\par
    \par
    while ((l1 != NULL) && (l2 != NULL)) \par
    \{\par
        if (l1->val <= l2->val)\par
        \{\par
            new->next = l1;\par
            l1 = l1->next;\par
        \} \par
        else \par
        \{\par
            new->next = l2;\par
            l2 = l2->next;\par
        \}\par
        new = new->next;\par
    \}\par
    if ((l1 == NULL) && (l2 != NULL))\par
    \{\par
        new->next = l2;\par
    \}\par
    else if ((l1 != NULL) && (l2 == NULL))\par
    \{\par
        new->next = l1;\par
    \}\par
    return newlist->next;\par
\par
\}\par
}
 