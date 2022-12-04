#include "../push_swap.h"

static void save_lines(void);
static void save_lines2(int ac);

void three_numbers(int ac)
{
	if (confirm(ac) == 0)
		return ;
	else if (ac == 3)
		swap_A(0);
	else if (stacks()->stack_A[0] < stacks()->stack_A[1])
	{
		if (stacks()->stack_A[1] < stacks()->stack_A[2])
			save_lines();
		else if (stacks()->stack_A[0] < stacks()->stack_A[2])
			save_lines2(ac);
		else
			reverse_rotate_A(ac, 0);
	}
 	else if(stacks()->stack_A[0] > stacks()->stack_A[1] && stacks()->stack_A[0] > stacks()->stack_A[2])
	{
		if(stacks()->stack_A[1] < stacks()->stack_A[2])
			rotate_A(0);
		else
		{
			rotate_A(0);
			swap_A(0);
		}
	}
	else
		swap_A(0);
}

static void save_lines(void)
{
	swap_A(0);
	rotate_A(0);
}

static void save_lines2(int ac)
{
	reverse_rotate_A(ac, 0);
	swap_A(0);
}