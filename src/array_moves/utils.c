/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:49:50 by kzak              #+#    #+#             */
/*   Updated: 2022/06/20 12:09:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

long	atoilong(const char *str)
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

void	is_sort(t_stack *stack)
{
	size_t	i;
	size_t	j;
	size_t	k;
	
	j = 0;
	k = 0;
	while (j != stack->la)
	{
		i = j + 1;
		while (i <= stack->la)
		{
			if (stack->a[j] > stack->a[i])
				k = 1;
			i++;
		}
		j++;
	}
	if (k == 0)
	{
		ft_printf("the stack is already sorted!\n");
		exit (0);
	}
}
