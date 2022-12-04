#include "../push_swap.h"

static int is_number(char *str);

int is_all_numbers(int ac, char **av)
{
	int i;

	i = 1;
	while (ac > i)
	{
		if (is_number(av[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}


static int is_number(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '-' && (str[i] < '0' || str[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}