#include "../push_swap.h"

void cases_1(void);
void push_a_n_times(int n);


void sort_stacks(void)
{
	while(stack_b()->length > 0)
	{
		cases_1();
	}
}

int check_a(void)
{
	int i;
	int j;

	i = 0;
	while (i < utils()->ac)
	{
		j = i + 1;
		while (j < utils()->ac)
		{
			if (stack_a()->stack[i] > stack_a()->stack[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void cases_1(void)
{
	if (stack_b()->stack[0] >= stack_b()->stack[1] && stack_b()->stack[1] >= stack_b()->stack[2])
	{
		push_a_n_times(3);
	}
	else if (stack_b()->stack[0] < stack_b()->stack[1])
	{
		if (stack_b()->stack[1] < stack_b()->stack[2])
		{
			push_a();
			rotate_a(0);
			push_a_n_times(2);
			swap_a(0);
			reverse_rotate_a(0);

		}
		else if (stack_b()->stack[0] > stack_b()->stack[2])
		{
			swap_b(0);
			push_a_n_times(3);
		}
		else if (stack_b()->stack[1] > stack_b()->stack[2])
		{
			swap_b(0);
			push_a_n_times(3);
			swap_a(0);
		}
	}
	else if (stack_b()->stack[0] > stack_b()->stack[1])
	{
		if (stack_b()->stack[0] < stack_b()->stack[2])
		{
			/* ft_printf("entrei\n"); */
			push_a();
			rotate_a(0);
			swap_b(0);
			push_a();
			reverse_rotate_a(0);
			push_a();
		}
		else if (stack_b()->stack[1] < stack_b()->stack[2])
		{
			push_a_n_times(3);
			swap_a(0);
		}
	}
	return ;	
}


void push_a_n_times(int n)
{
	while (n-- > 0)
		push_a();
	return ;
}