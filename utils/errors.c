/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/03 10:38:31 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
			if (ft_isdigit((av[i][j])) == FALSE)
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

// void	intmaxmin(void)
// {
	
// }

void	ft_errors(char **av)
{
	// if (av == 2)
	// {

	// }
	isnumber(av);
	// intmaxmin(av);
}