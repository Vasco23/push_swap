#include "../push_swap.h"

int *put_a_new_nbr(int *stack, int len, int nbr)
{
	int tmp_1;
	int tmp_2;
	int i;

	i = 0;
	while (i >= 0)
	{
		tmp_1 = stack[i];
		if(i == 0)
			stack[i] = len;
		else
		{
			tmp_2 = stack[i + 1];
			stack[i] = tmp_1;
			tmp_1 = tmp_2;
		}
		i++;
	}
	stack[i] = tmp_1;
	return (stack);
}

int *clean_frist_nbr(int *stack, int len)
{
	int i;

	i = 0;
	while(len >= 0)
		stack[i] = stack[i + 1];
	return(stack);
}


void push_a(void)
{
	if (!stacks()->stack_b->length < 1)
		return ;
	stacks()->stack_a->length += 1;
	stacks()->stack_b->length -= 1;
	stacks()->stack_a->stack = put_a_new_nbr(stacks()->stack_a->stack, stacks()->stack_a->length, stacks()->stack_b->stack[0]);
	stacks()->stack_b->stack = clean_frist_nbr(stacks()->stack_b->stack, stacks()->stack_b->length);
	ft_printf("pa\n");
	return ;
}

void push_b(void)
{
	if (!stacks()->stack_a->length < 1)
		return ;
	stacks()->stack_b->length += 1;
	stacks()->stack_a->length -= 1;
	stacks()->stack_b->stack = put_a_new_nbr(stacks()->stack_b->stack, stacks()->stack_b->length, stacks()->stack_a->stack[0]);
	stacks()->stack_a->stack = clean_frist_nbr(stacks()->stack_a->stack, stacks()->stack_a->length);
	ft_printf("pa\n");
	return ;
}