#include "push_swap.h"

t_stacks *stacks(void)
{
	static t_stacks stacks;
	return (&stacks);
}

int main(int ac, char **av)
{
	int i = 0;
	stacks()->stack_a->length = ac - 1;
	if(errors_and_stacks(ac, av) != 0)
		return (0);
	push_a();
	/* three_numbers(ac); */
	while (ac > i + 1)
	{
		printf("stack A ->%d stack B ->%d\n", stacks()->stack_a->stack[i], stacks()->stack_b->stack[i]);
		i++;
	}
	return (0);
}