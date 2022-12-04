#include "../push_swap.h"

void swap_A(int ver)
{
	int temp;

	if (!stacks()->stack_A[0] || !stacks()->stack_A[1])
		return ;
	temp = stacks()->stack_A[0];
	stacks()->stack_A[0] = stacks()->stack_A[1];
	stacks()->stack_A[1] = temp;
	if (ver != 1)
		ft_printf("sa\n");
	return ;
}

void swap_B(int ver)
{
	int temp;

	if (!stacks()->stack_B[0] || !stacks()->stack_B[1])
		return ;
	temp = stacks()->stack_B[0];
	stacks()->stack_B[0] = stacks()->stack_B[1];
	stacks()->stack_B[1] = temp;
	if (ver != 1)
		ft_printf("sb\n");
	return ;
}

void swap_A_and_B(void)
{
	swap_A(1);
	swap_B(1);
	ft_printf("ss\n");
	return ;
}