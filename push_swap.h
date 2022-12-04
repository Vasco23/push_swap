#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "./ft_printf.h"


typedef struct s_stacks
{
	int *stack_A;
	int *stack_B;
}		t_stacks;


t_stacks 	*stacks(void);
int 		copy_av(int ac ,char **av);
long		ft_atol(const char *nptr);
int 		is_all_numbers(int ac, char **av);
int 		check_dup(char **av);
int			ft_strcmp(const char *s1, const char *s2);
int 		errors_and_stacks(int ac, char **av);
void 		swap_A(int ver);
void 		swap_B(int ver);
void 		swap_A_and_B(void);
void 		push_A(void);
void 		push_B(void);
void 		rotate_A(int ver);
void 		rotate_B(int ver);
void 		rotate_A_and_B(void);
void 		reverse_rotate_A(int ac, int ver);
void 		reverse_rotate_B(int ac, int ver);
void 		reverse_rotate_A_and_B(int ac);
void 		three_numbers(int ac);
int 		confirm(int ac);



#endif