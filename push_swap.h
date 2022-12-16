#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "./ft_printf.h"

typedef struct s_stack
{
	int *stack;
	int length;
}		t_stack;


typedef struct s_stacks
{
	t_stack *stack_a;
	t_stack *stack_b;
}		t_stacks;


t_stacks 	*stacks(void);
int 		copy_av(int ac ,char **av);
long		ft_atol(const char *nptr);
int 		is_all_numbers(int ac, char **av);
int 		check_dup(char **av);
int			ft_strcmp(const char *s1, const char *s2);
int 		errors_and_stacks(int ac, char **av);
void 		swap_a(int ver);
void 		swap_b(int ver);
void 		swap_a_and_b(void);
void 		push_a(void);
void 		push_b(void);
void 		rotate_a(int ver);
void 		rotate_b(int ver);
void 		rotate_a_and_b(void);
void 		reverse_rotate_a(int ac, int ver);
void 		reverse_rotate_b(int ac, int ver);
void 		reverse_rotate_a_and_b(int ac);
void 		three_numbers(int ac);
int 		confirm(int ac);



#endif