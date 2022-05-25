/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 14:35:44 by kzak             ###   ########.fr       */
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

//5case
void	fivecase(t_push_swap *stack, int n);
int		find_min(t_stack *stack, int n);
int		find_max(t_stack *stack, int n);

//ft_errors
void	ft_errors(int ac, char **av);

//moves
void	sort_max(t_push_swap *stack, int max);
void	sort_min(t_push_swap *stack, int min);

//utils
int		is_sort(t_stack *stack, int type, int n);
long	atoilong(const char *str);
void	sort(t_push_swap *stack);

//varius_sort
void	varius_sort(t_push_swap *stack);

#endif
