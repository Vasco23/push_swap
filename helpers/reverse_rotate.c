#include "../push_swap.h"

void reverse_rotate_A(int ac, int ver)
{
	int i;
	int tmp;

	ac -= 1;
	i = ac;
	while(stacks()->stack_A[i - 1])
	{
		if(i == ac)
			tmp = stacks()->stack_A[i - 1];
		stacks()->stack_A[i] = stacks()->stack_A[i - 1];
		i--;
	}
	stacks()->stack_A[0] = tmp;
	if (ver != 1)
		ft_printf("rra\n");
	return ; 
}

void reverse_rotate_B(int ac, int ver)
{
	int i;
	int tmp;

	ac -= 1;
	i = ac;
	while(stacks()->stack_B[i - 1])
	{
		if(i == ac)
			tmp = stacks()->stack_B[i - 1];
		stacks()->stack_B[i] = stacks()->stack_B[i - 1];
		i--;
	}
	stacks()->stack_B[0] = tmp;
	if (ver != 1)
		ft_printf("rrb\n");
	return ; 
}

void reverse_rotate_A_and_B(int ac)
{
	reverse_rotate_A(ac, 1);
	reverse_rotate_B(ac, 1);
	ft_printf("rrr\n");
	return ;
}