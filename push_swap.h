/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 12:46:07 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

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

//main
int		main(int argc, char **argv);
void	insert_into_a(char **argv, t_stack stack);

//3case
void	threecase(t_stack stack);
int		sort(t_stack stack);

//5case
void	fivecase(t_stack stack);
int		find_min(t_stack stack);
int		find_max(t_stack stack);

//moves
int	sort_max(t_stack stack, int max);
int	sort_min(t_stack stack, int min);

//ft_errors
void	ft_errors(int ac, char **av);

//swap
void	sa(t_stack stack);
void	sb(t_stack stack);
void	ss(t_stack stack);

//rotate
void	ra(t_stack stack);
void	rb(t_stack stack);
void	rr(t_stack stack);

//reverse_rotate
void	rra(t_stack stack);
void	rrb(t_stack stack);
void	rrr(t_stack stack);

//push
void	pa(t_stack stack);
void	pb(t_stack stack);

#endif