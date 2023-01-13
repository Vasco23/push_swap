#include "../push_swap.h"

void sort_less_than_50(int n)
{
	int	i;
	int times;

	i = 0;
	while (stack_a()->length > 0 && times < n)
	{
		if (stack_a()->length > 3)
		{
			i = get_3_lower_A(utils()->tmp, utils()->ac, 3);
			send_to_b(i, 3);
			times += 3;
		}
		else if (stack_a()->length == 3)
		{
			three_numbers();
			break;
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