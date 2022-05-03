/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/03 11:43:52 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static long	atoilong(const char *str)
{
	long	res;
	int		sign;
	size_t	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		// if (res * sign < -2147483648 || res * sign > 2147483648)
		// 	return ((res * sign < -2147483648) - 1);
		i++;
	}
	return ((res * sign));
}

void	isnumber(char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (av[i])
	{
		while (av[i][j])
		{
			if ((ft_isdigit(av[i][j]) == FALSE && av[i][j] != '-') || (av[i][j] == '-' && ft_isdigit(av[i][j++]) == TRUE))
			{
				ft_printf("Error: only number\n");
				exit (0);
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	intmaxmin(char **av)
{
	long	j;

	j = 1;
	while (av[j])
	{
		if (atoilong(av[j]) < INT_MIN || atoilong(av[j]) > INT_MAX)
		{
			ft_printf("Error: Number exceed int value\n");
			exit (0);
		}
	j++;
	}
}

void	ft_errors(char **av)
{
	// if (av == 2)
	// {

	// }
	isnumber(av);
	intmaxmin(av);
}
