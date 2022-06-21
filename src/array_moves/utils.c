/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:49:50 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 12:28:12 by kzak             ###   ########.fr       */
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
	
	i = 0;
	k = 0;
	while (i != stack->la)
	{
		j = i + 1;
		while (j != stack->la)
		{
			if (stack->a[i] > stack->a[j])
				k = 1;
			j++;
		}
		i++;
	}
	if (k == 0)
	{
		// ft_printf("the stack is already sorted!\n");
		exit (0);
	}
}
