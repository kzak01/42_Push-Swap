/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/05/03 10:59:34 by mvolpi           ###   ########.fr       */
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
void	threecase(char **argv);
int		sort(int *a);
void	ra(int *a);
void	rra(int *a);
void	sa(int *a);

//5case
void	fivecase(char **argv);
int		find_min(int a[5]);
int		find_max(int a[5]);

//moves
void	pb(int a[5], int b[5]);
void	pa(int a[5], int b[5]);
int		sort_max(int a[5], int b[5], int d);
int		sort_min(int a[5], int b[5], int d);

//ft_errors
void	ft_errors(char **av);
void	isnumber(char **av);
void	intmaxmin(char **av);

//moves_2
void	sa_2(int *a);
void	rra_2(int *a);
void	ra_2(int *a);

#endif