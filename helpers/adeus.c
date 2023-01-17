#include "../push_swap.h"

int check_if_bigger_a(int n);
int check_if_lower_a(int n);
int compare_cases(int n);
int check_lower(void);
int up_or_down_3(int nbr);

int cases(void)
{
	if (check_if_bigger_a(stack_b()->stack[0]) == 1)
		return (1);
	else if (check_if_lower_n(stack_b()->stack[0]) == 1)
		return (2);
	return (3);
}

void count_moves(void)
{
	int tmp;

	tmp = 0;
	/* if (cases() == 1)
		push_a(); */
	if (cases() == 2)
	{
		tmp = up_or_down_3(check_lower());
		while (stack_a()->stack[0] != check_lower())
		{
			if (tmp == 1)
				reverse_rotate_a(0);
			else if (tmp == 2)
				rotate_a(0);
		}
		push_a();
		/* while (check_if_lower_a(stack_a()->stack[stack_a()->length - 1]) == 0)
			reverse_rotate_a(0);
		push_a();
		reverse_rotate_a(0); */
	}
	else if (cases() == 3)
	{
		tmp = up_or_down_3(compare_cases(stack_b()->stack[0]));
		while (stack_a()->stack[stack_a()->length - 1] != compare_cases(stack_b()->stack[0]))
		{
			if (tmp == 1)
				reverse_rotate_a(0);
			else if (tmp == 2)
				rotate_a(0);
		}
		push_a();
		/* printf("\n\n\n\n");
		for(int i = 0; utils()->ac > i; i++)
		{
			ft_printf("\nstack A ->%d stack B ->%d\n", stack_a()->stack[i], stack_b()->stack[i]);
		} */
	}
}

int check_if_bigger_a(int n)
{
	int i;

	i = 0;
	while (i < stack_b()->length)
	{
		if (stack_b()->stack[i] >= n)
			return (0);
		i++;
	}
	return (1);
}

int check_if_lower_a(int n)
{
	int i;

	i = 0;
	while (i < stack_a()->length)
	{
		if (stack_a()->stack[i] <= n)
			return (0);
		i++;
	}
	return (1);
}

int compare_cases(int n)
{
	int i;
	int j;
	int tmp;
	int tmp_2;

	tmp_2 = 0;
	tmp = 0;
	i = 0;
	while (i < stack_a()->length)
	{
		while ((n - stack_a()->stack[i]) < 0)
			i++;
		tmp = stack_a()->stack[i] - n;
		j = i + 1;
		while (j < stack_a()->length)
		{
			while ((n - stack_a()->stack[j]) < 0)
				j++;
			tmp_2 = stack_a()->stack[j] - n;
			if (tmp > tmp_2)
			{
				break;
			}
			j++;
		}
		if (j >= stack_a()->length)
			break;
		i++;
	}
	return (stack_a()->stack[i]);
}

int up_or_down_3(int nbr)
{
	int tmp;
	int j;
	int i;

	tmp = 0;
	i = 1;
	j = 0;
	while (stack_a()->stack[j] != nbr && j < stack_a()->length)
		j++;
	tmp = stack_a()->length - 1;
	while (stack_a()->stack[tmp] != nbr && tmp >= 0)
	{
		tmp--;
		i++;
	}
	printf("\ni > %d j > %d\n", i, j);
	if (i < j)
		return (1);
	return (2);
}

int check_lower(void)
{
	int i;
	int j;

	i = 0;
	while (i < stack_a()->length)
	{
		j = i + 1;
		while (j < stack_a()->length)
		{
			if (stack_a()->stack[i] > stack_a()->stack[j])
				break;
			j++;
		}
		if (j == stack_a()->length)
			return (stack_a()->stack[i]);
		i++;
	}
	return (0);
}