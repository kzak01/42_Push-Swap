/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/05/02 10:36:14 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

//main
int	main(int argc, char **argv);

//3case
void	threecase(char **argv);
void	sort(int *a);
void	ra(int *a);
void	rra(int *a);
void	sa(int *a);

//5case
void fivecase(char **argv);
int	find_min(int a[5]);
int	find_max(int a[5]);

//moves
void	pb(int a[5], int b[5]);
void	pa(int a[5], int b[5]);



//ft_errors
void	ft_errors(char **av);
void	isnumber(char **av);

#endif