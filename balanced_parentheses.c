#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
	char data;
	struct stack *next;
};

void push(struct stack **top_ref, int new_data)
{
	struct stack *node =(struct stack*)malloc(sizeof(struct stack));

	if (node == NULL)
    {
		printf("Stack overflow \n");
		return ;
	}
	node->data = new_data;
	node->next = *top_ref;

	*top_ref = node;
}

char pop(struct stack **top_ref)
{
	char res;
	struct stack *top;

	if(*top_ref == NULL)
    {
        printf("Stack overflow n");
		exit(0);
	}
	else
	{
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}

int balanced_parentheses(char *exp)
{
	struct stack *stack_node = NULL;
	int l=strlen(exp);

	for(int i = 0; i < l; i++)
	{
		if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            push(&stack_node, exp[i]);
        }
		if(exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
			if(stack_node == NULL)
            {
                return 0;
            }
			else
            {
                char temp = pop(&stack_node);

                if(exp[i] == ')' && (temp == '{' || temp == '[' ))
                {
                    return 0;
                }
                if(exp[i] == '}' && (temp == '(' || temp == '[' ))
                {
                    return 0;
                }
                if( exp[i] == ']' && (temp== '(' || temp == '{' ))
                {
                    return 0;
                }
            }
		}
	 }

	if(stack_node == NULL)
    {
        return 1;
    }
	else
    {
        return 0;
    }
}

int main()
{
	char exp[100];
	scanf("%s",exp);

	if(balanced_parentheses(exp))
    {
        printf("Balanced\n");
    }
	else
    {
        printf("Not Balanced\n");
    }

}

