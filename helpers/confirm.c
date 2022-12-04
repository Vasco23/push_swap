#include "../push_swap.h"

int confirm(int ac)
{
	int i;

	i = 0;
	ac -= 1;
	while(stacks()->stack_A[i + 1])
	{
		if(stacks()->stack_A[i] >= stacks()->stack_A[i + 1])
			return (1);
		i++;
	}
	i++;
	if(i < ac)
		return(1);
	return (0);
}
