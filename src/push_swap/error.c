/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:06:59 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 11:51:16 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	nocopy(char **av)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 1;
// 	while (av[i])
// 	{
// 		while (av[j])
// 		{
// 			if (ft_atoi(av[i]) == ft_atoi(av[j]))
// 			{
// 				ft_printf("\033[0;31m" "Error: '%d' is a duplicate number\n" \
// 					"\033[0m", ft_atoi(av[j]));
// 				exit (0);
// 			}
// 			j++;
// 		}
// 		i++;
// 		j = i + 1;
// 	}
// }

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

void	ft_errors(int ac, char **av)
{
	int			i;
	int			j;
	char		**str;

	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			isnumber(str);
			intmaxmin(str);
			// nocopy(str);
			j++;
		}
		i++;
		free_str(str);
	}
	isnumber(av);
	intmaxmin(av);
	// nocopy(av);
}
