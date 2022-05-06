/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 10:33:56 by kzak             ###   ########.fr       */
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

//3case
void	threecase(t_stack stack);
int		sort(t_stack stack);

//5case
// void	fivecase(int *a, int *b, char **argv);
// int		find_min(char **argv);
// int		find_max(char **argv);

//moves
int		sort_max(int a[5], int b[5], int d);
int		sort_min(int a[5], int b[5], int d);

//ft_errors
void	ft_errors(int ac, char **av);

//swap
void	sa(t_stack stack);
void	sb(int *b, size_t l);
void	ss(int *a, int *b, size_t la, size_t lb);

//rotate
void	ra(t_stack stack);
void	rb(int *b, size_t l);
void	rr(int *a, int *b, size_t la, size_t lb);

//reverse_rotate
void	rra(t_stack stack);
void	rrb(int *b, size_t l);
void	rrr(int *a, int *b, size_t la, size_t lb);

//push
void	pa(int *a, int *b, size_t la, size_t lb);
void	pb(int *b, int *a, size_t la, size_t lb);

//main
int	main(int argc, char **argv);

#endif