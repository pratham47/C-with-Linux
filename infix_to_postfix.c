#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack
{
	int top;
	int capacity;
	int* array;
};

struct stack* create_stack(int capacity )
{
	struct stack* stack_node = (struct stack*)malloc(sizeof(struct stack));

	if(stack_node == NULL)
    {
        return NULL;
    }

	stack_node->top = -1;
	stack_node->capacity = capacity;

	stack_node->array = (int*) malloc(stack_node->capacity * sizeof(int));

	return stack_node;
}

int is_empty(struct stack *stack_)
{
	return stack_->top == -1 ;
}

char peek(struct stack *stack_)
{
	return stack_->array[stack_->top];
}

char pop(struct stack *stack_)
{
	if (!is_empty(stack_))
    {
        return stack_->array[stack_->top--] ;
    }
	return '!';
}

void push(struct stack* stack_, char ch)
{
	stack_->array[++stack_->top] = ch;
}

int is_operand(char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int precedence(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;
	}

	return -1;
}

void infix_to_postfix(char *exp)
{
	int k = -1;

	struct stack* stack_ = create_stack(strlen(exp));

	if(!stack_)
    {
        printf("Postfix expression not possible\n");
        exit(0);
    }

	for (int i = 0; exp[i]!='\0'; ++i)
	{
		if(is_operand(exp[i]))
        {
            exp[++k] = exp[i];
        }
		else if(exp[i] == '(')
        {
            push(stack_, exp[i]);
        }
		else if(exp[i] == ')')
		{
			while (!is_empty(stack_) && peek(stack_) != '(')
            {
                exp[++k] = pop(stack_);
            }

			if(!is_empty(stack_) && peek(stack_) != '(')
            {
                printf("Postfix expression not possible\n");
                exit(0);
            }
			else
            {
                pop(stack_);
            }
		}
		else
		{
			while (!is_empty(stack_) && precedence(exp[i]) <= precedence(peek(stack_)))
            {
                exp[++k] = pop(stack_);
            }
			push(stack_, exp[i]);
		}
	}

	while (!is_empty(stack_))
    {
        exp[++k] = pop(stack_);
    }

	exp[++k] = '\0';
	printf("Postfix expression is = %s", exp);
}

int main()
{
	char exp[100];
	scanf("%s",exp);

	infix_to_postfix(exp);
}
