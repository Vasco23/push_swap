#include "../push_swap.h"

void push_A(void)
{
	int i;

	i = 0;
	if (!stacks()->stack_B[0])
		return ;
	stacks()->stack_A[0] = stacks()->stack_B[0];
	return ;
	while (stacks()->stack_B[i + 1])
	{
		stacks()->stack_B[i] = stacks()->stack_B[i + 1];
		i++;
	}
	stacks()->stack_B[i] = 0;
	ft_printf("pa\n");
	return ;
}

void push_B(void)
{
	int i;

	i = 0;
	if (!stacks()->stack_A[0])
		return ;
	stacks()->stack_B[0] = stacks()->stack_A[0];
	while (stacks()->stack_A[i + 1])
	{
		stacks()->stack_A[i] = stacks()->stack_A[i + 1];
		i++;
	}
	stacks()->stack_A[i] = 0;
	ft_printf("pb\n");
	return ;
}