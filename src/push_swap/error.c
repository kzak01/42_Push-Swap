/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:06:59 by kzak              #+#    #+#             */
/*   Updated: 2022/06/09 11:22:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nocopy(t_stack *result)
{
	int	temp;

	temp = result->content;
	result = result->next;
	while (result)
	{
		if (result->content == temp)
		{
			
			ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
					"\033[0m", temp);
			exit (1);
		}
		nocopy(result);
		result = result->next;
	}
}

static void	isnumber(char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (av[i])
	{
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == ' ')
				j++;
			else if (ft_isdigit(av[i][j]) == FALSE)
			{
				ft_printf("\033[0;31m" "Error: '%c' is not a number\n" \
					"\033[0m", av[i][j]);
				exit (0);
			}
			j++;
		}
		i++;
		j = 0;
	}
}

static void	intmaxmin(char **av)
{
	long	j;

	j = 1;
	while (av[j])
	{
		if (atoilong(av[j]) < MIN_INT || atoilong(av[j]) > MAX_INT)
		{
			ft_printf("\033[0;31m" "Error: A number exceed int value\n" \
				"\033[0m");
			exit (0);
		}
	j++;
	}
}

void	ft_errors(char **av)
{
	isnumber(av);
	intmaxmin(av);
}
