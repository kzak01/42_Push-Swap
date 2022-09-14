/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/09/14 12:04:08 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	nocopy(t_stack *stack, int i, int z)
{
	int	j;
	int	n;

	j = 0;
	n = 0;
	while (z-- != 0)
	{
		if (stack->a[z] == i)
			j++;
		if (j == 2)
		{
			ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
					"\033[0m", i);
			exit (1);
		}
	}
}

static void	isnumber(char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
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

	j = 0;
	while (av[j])
	{
		if (atoilong(av[j]) < MIN_INT || atoilong(av[j]) > MAX_INT)
		{
			ft_printf("\033[0;31m" "Error: Number exceed int value\n" "\033[0m");
			exit (0);
		}
		j++;
	}
}

static void	min_case(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' && !ft_isdigit(av[i][j + 1]))
			{
				ft_printf("\033[0;31m" "Error\n" "\033[0m");
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	ft_errors(int ac, char **av)
{
	int		i;
	char	**str;

	i = 0;
	min_case(ac, av);
	while (++i < ac)
	{
		str = ft_split(av[i], ' ');
		isnumber(str);
		intmaxmin(str);
		free_str(str);
	}
}
