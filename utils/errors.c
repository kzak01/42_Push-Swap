/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/04 13:34:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	nocopy(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (av[i])
	{
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				ft_printf("Error: duplicate number\n");
				exit (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

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
		i++;
	}
	return ((res * sign));
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
			if (av[i][j] == '"')
				j++;
			if (av[i][j] == '-')
				j++;
			if (av[i][j] == ' ')
				j++;
			if (ft_isdigit(av[i][j]) == FALSE)
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

static void	intmaxmin(char **av)
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

void	ft_errors(int ac, char **av)
{
	(void)ac;
	int	i;

	i = 0;
	isnumber(av);
	while (av[i])
	{
		if (i == 0)
		{
			intmaxmin(&av[i]);
		}
		intmaxmin(ft_split(av[i], ' '));
		i++;
	}
	nocopy(av);
}
