#include "../push_swap.h"

void sort_50_or_more(void)
{
	int i = 0;
	while (stack_a()->length > 30)
	{
		sort_less_than_50(30);
		sort_stacks();
		 while (utils()->ac > i)
		{
			ft_printf("\nstack A ->%d stack B ->%d\n", stack_a()->stack[i], stack_b()->stack[i]);
			i++;
		}
		ft_printf("\n\n");
		i = 0;
	}
	sort_less_than_50(stack_a()->length);
	sort_stacks();
}

/* void give_next_chunk(void)
{
	static int moves;

	while()
} */