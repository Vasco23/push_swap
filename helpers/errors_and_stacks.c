#include "../push_swap.h"

int errors_and_stacks(int ac, char **av)
{
	if (is_all_numbers(ac, av) == 1)
		return (ft_printf("Only Numbers Allowed\n"));
	if (check_dup(av) == 1)
		return (ft_printf("Duplicated Numbers Aren't Allowed\n")); 
	if (copy_av(ac, av) == 1)
		return (ft_printf("Malloc Failed\n"));
	if (copy_av(ac, av) == 2)
		return (ft_printf("Only Int Type Numbers Allowed\n"));
	return (0);
}