#include "../push_swap.h"

void sort_50_or_more(void)
{
	/* int i = 0; */
	int j = 0;
	int times = 4;
	while (times > 1)
	{
		sort_less_than_50(30, j, 30);
		sort_stacks();
		/* while (utils()->ac > i)
		{
			ft_printf("\nstack A ->%d stack B ->%d\n", stack_a()->stack[i], stack_b()->stack[i]);
			i++;
		}
		ft_printf("\n\n"); */
		/* i = 0;  */
		j++;
		times--;
	}
	sort_less_than_50(9, j , 30);
	/* if (check_a() == 0)
		return; */
	sort_stacks();
}
