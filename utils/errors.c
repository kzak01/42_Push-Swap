/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/10 11:57:24 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
				ft_printf("Error: duplicate number\n");
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
				ft_printf("Error: duplicate number\n");
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
			if (av[i][j] == '"')
				j++;
			else if (av[i][j] == '-')
				j++;
			else if (av[i][j] == ' ')
				j++;
			else if (ft_isdigit(av[i][j]) == FALSE)
			{
				printf("Error: only number\n");
				exit (0);
			}
			else if (ft_isalpha(av[i][j]) == TRUE)
			{
				printf("Error: only number\n");
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
	i = 0;
	if (ac == 2)
	{
		while (av[i])
		{
			nocopy(ft_split(av[i], ' '));
			i++;
		}
	}
	if (ac > 2)
		nocopy2(av);
}
