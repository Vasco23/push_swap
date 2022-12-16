#include "../push_swap.h"

int copy_av(int ac ,char **av)
{
	int i;

	i = 0;
	stacks()->stack_a->stack = malloc(sizeof(int *) * (ac - 1));
	stacks()->stack_b->stack = malloc(sizeof(int *) * (ac - 1));
	if (!stacks()->stack_a->stack || !stacks()->stack_b->stack)
		return (1);
	while (ac > i + 1)
	{
		if(ft_atol(av[i + 1]) >= -2147483648 && ft_atol(av[i + 1]) <= 2147483647)
			stacks()->stack_a->stack[i] = ft_atol(av[i + 1]);
		else
			return (2);
		i++;
	}
	return (0);
}
