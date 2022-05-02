/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:30:33 by kzak              #+#    #+#             */
/*   Updated: 2022/04/30 12:02:59 by kzak             ###   ########.fr       */
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
int	find_min(char **argv);
int	find_max(char **argv);

//ft_errors
void	ft_errors(char **av);
void	isnumber(char **av);

#endif