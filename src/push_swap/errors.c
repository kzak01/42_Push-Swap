/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/24 11:03:44 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	nocopy(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (av[i])
	{
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
					"\033[0m", ft_atoi(av[j]));
				exit (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

static void	nocopy2(char **av)
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
				ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
					"\033[0m", ft_atoi(av[j]));
				exit (0);
			}
			j++;
		}
		i++;
		j = i + 1;
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
			if (av[i][j] == '"' || av[i][j] == '-' || av[i][j] == ' ')
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
		if (atoilong(av[j]) < INT_MIN || atoilong(av[j]) > INT_MAX)
		{
			ft_printf("\033[0;31m" "Error: A number exceed int value\n" \
				"\033[0m");
			exit (0);
		}
	j++;
	}
}

void	ft_errors(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 2)
	{
		while (av[i])
		{
			isnumber(ft_split(av[i], ' '));
			intmaxmin(ft_split(av[i], ' '));
			nocopy(ft_split(av[i], ' '));
			i++;
		}
	}
	if (ac > 2)
	{
		isnumber(av);
		intmaxmin(av);
		nocopy2(av);
	}
}
