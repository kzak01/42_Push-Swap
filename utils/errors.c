/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:09:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/02 10:43:37 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	isnumber(char **av)
{
	int	*a;
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (av[i])
	{
		if (ft_isdigit(ft_atoi(&av)) == TRUE)
			i++;
		else
			ft_printf("Error: only number\n");
			exit (0);
	}
}

void	ft_errors(char **av)
{
	// if (av == 2)
	// {

	// }
	isnumber(av);
}