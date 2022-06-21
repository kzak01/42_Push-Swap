/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 10:07:20 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	nocopy(t_stack *stack, int i)
{
	int	j;
	int	n;

	j = 0;
	n = 0;
	while (stack->a[n])
	{
		if (stack->a[n] == i)
			j++;
		if (j == 2)
		{
			ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
					"\033[0m", i);
			exit (1);
		}
		n++;
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
		if (atoilong(av[j]) < INT_MIN || atoilong(av[j]) > INT_MAX)
		{
			ft_printf("\033[0;31m" "Error: Number exceed int value\n" "\033[0m");
			exit (0);
		}
		j++;
	}
}

void	ft_errors(int ac, char **av)
{
	int		i;
	char	**str;

	i = 0;
	while (++i < ac)
	{
		str = ft_split(av[i], ' ');
		isnumber(str);
		intmaxmin(str);
		free_str(str);
	}
}