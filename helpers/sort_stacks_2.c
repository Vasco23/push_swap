#include "../push_swap.h"

int check_a_only_3(void)
{
	if (stack_a()->length <= 3)
	{
		three_numbers();
		return (1);
	}
	return (0);
}