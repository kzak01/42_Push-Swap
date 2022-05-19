/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/05/19 11:08:07 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include "push_swap2.h"
# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int		*a;
	int		*b;
	size_t	la;
	size_t	lb;
}	t_stack;

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

typedef enum e_int
{
	INT_MAX = 2147483647,
	INT_MIN = -2147483648
}	t_int;

//printarray
void	printarray(t_stack *st);

//main
int		main(int argc, char **argv);

//5case
void	fivecase(t_stack *stack);
int		find_min(t_stack *stack);
int		find_max(t_stack *stack);

//ft_errors
void	ft_errors(int ac, char **av);

//moves
void	sort_max(t_stack *stack, int max);
void	sort_min(t_stack *stack, int min);

//push
void	pa(t_stack *stack);
void	pb(t_stack *stack);

//reverse_rotate
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

//rotate
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

//swap
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

//utils
int		is_sort(t_stack *stack);
long	atoilong(const char *str);
void	sort(t_stack *stack);

//varius_sort
void	varius_sort(t_stack *stack, t_push_swap *data, int argc, char **argv, int n);

#endif
