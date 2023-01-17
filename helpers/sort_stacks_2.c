#include "../push_swap.h"

void sort_less_than_50(int n, int j , int v)
{
	int	i;
	int times;
	int lower;

	i = 0;
	lower = -2147483648;
	if (j != 0)
		lower = get_3_lower_A_2(utils()->tmp , utils()->ac, v);
	/* printf("%d\n\n", j); */
	times = 0;
	while (times < n)
	{
		if (stack_a()->length >= 3)
		{
			i = get_3_lower_A(utils()->tmp, utils()->ac, 3);
			send_to_b(i, 3, lower);
			times += 3;
		}
		else if (stack_a()->length == 2 && stack_a()->stack[0] > stack_a()->stack[1])
		{
			swap_a(0);
			break;
		}
		else
			break;
	}
}
