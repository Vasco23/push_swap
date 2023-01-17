#include "../push_swap.h"

int up_or_down_2(int nbr);
void send_to_a(long nbr , int n_times);
long get_3_bigger(int *array, int lenght, int n);


void sort(void)
{
	int i = 0;
	/* int j = 1; */
	i = get_3_lower_A(utils()->tmp, utils()->ac, utils()->ac/2);
	while (check_if_lower_n(i) == 0)
	{
		if (stack_a()->stack[0] <= i)
			push_b();
		else if (up_or_down_2(i) == 1)
			reverse_rotate_a(0);
		else if (up_or_down_2(i) == 2)
			rotate_a(0);
		if (stack_b()->length > 1 && stack_b()->stack[0] < stack_b()->stack[1])
			swap_b(0);
	}
	i = get_3_lower_A(utils()->tmp, utils()->ac, utils()->ac / 2 - 3);
	while (check_if_lower_n(i) == 0)
	{
		if (stack_a()->stack[0] <= i)
			push_b();
		else if (up_or_down_2(i) == 1)
			reverse_rotate_a(0);
		else if (up_or_down_2(i) == 2)
			rotate_a(0);
		if (stack_b()->length > 1 && stack_b()->stack[0] < stack_b()->stack[1])
			swap_b(0);
	}
	three_numbers();
	/* i = 3;
	while(stack_b()->length > 10)
	{
		send_to_a(get_3_bigger(utils()->tmp, utils()->ac, i), 3);
		i += 3;
	} */

}

int up_or_down_2(int nbr)
{
	int tmp;
	int j;
	int i;

	tmp = 0;
	i = 1;
	j = 0;
	while (stack_a()->stack[j] < nbr)
		j++;
	tmp = stack_a()->length - 1;
	while (stack_a()->stack[tmp] < nbr)
	{
		tmp--;
		i++;
	}
	if (i < j)
		return (1);
	return (2);
}

void send_to_a(long nbr , int n_times)
{
	int tmp;

	tmp = 0;
	/* printf("%ld nbr\n", nbr); */
	while(n_times == 1)
	{
		tmp = up_or_down_2(nbr);
		/* printf("%d n_times\n", n_times); */
		if (tmp == 1)
		{
			while (stack_b()->stack[0] < nbr)
				reverse_rotate_b(0);
			push_a();
		}
		if (tmp == 2)
		{
			while (stack_b()->stack[0] < nbr)
				rotate_b(0);
			push_a();
		}
		n_times--;
	}
	return ;
}

long get_3_bigger(int *array, int lenght, int n)
{	
	if (lenght - n >= 0)
		lenght -= n;
	/* else
		return (2147483649); */
	return (array[lenght - 1]);
}

int check_if_bigger_b(int n)
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
