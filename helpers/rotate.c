#include "../push_swap.h"

void rotate_A(int ver)
{
	int i;
	int tmp;

	i = 0;
	while(stacks()->stack_A[i + 1])
	{
		if(i == 0)
			tmp = stacks()->stack_A[i];
		stacks()->stack_A[i] = stacks()->stack_A[i + 1];
		i++;
	}
	stacks()->stack_A[i] = tmp;
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}


void rotate_B(int ver)
{
	int i;
	int tmp;

	i = 0;
	while(stacks()->stack_B[i + 1])
	{
		if(i == 0)
			tmp = stacks()->stack_B[i];
		stacks()->stack_A[i] = stacks()->stack_B[i + 1];
		i++;
	}
	stacks()->stack_B[i] = tmp;
	if (ver != 1)
		ft_printf("rb\n");
	return ; 
}

void rotate_A_and_B(void)
{
	rotate_A(1);
	rotate_B(1);
	ft_printf("rr\n");
	return ;
}