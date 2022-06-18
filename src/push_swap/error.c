/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:06:59 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:04:50 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nocopy(t_stack *stack, int i)
{
	t_counter count;

	count.j = 0;
	while(stack)
	{
		if (stack->content == i)
			count.j++;
		if (count.j == 2)
		{
			ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
					"\033[0m", i);
			exit (1);
		}
		stack = stack->next;
	}
}

static void	isnumber(char **av)
{
	t_counter	count;

	count.j = 0;
	count.i = 1;
	while (av[count.i])
	{
		while (av[count.i][count.j])
		{
			if (av[count.i][count.j] == '-' || av[count.i][count.j] == ' ')
				count.j++;
			else if (ft_isdigit(av[count.i][count.j]) == FALSE)
			{
				ft_printf("\033[0;31m" "Error: '%c' is not a number\n" \
					"\033[0m", av[count.i][count.j]);
				exit (0);
			}
			count.j++;
		}
		count.i++;
		count.j = 0;
	}
}

static void	intmaxmin(char **av)
{
	t_counter	count;

	count.j = 1;
	while (av[count.j])
	{
		if (atoilong(av[count.j]) < MIN_INT || atoilong(av[count.j]) > MAX_INT)
		{
			ft_printf("\033[0;31m" "Error: A number exceed int value\n" \
				"\033[0m");
			exit (0);
		}
	count.j++;
	}
}

void	ft_errors(char **av)
{
	isnumber(av);
	intmaxmin(av);
}
