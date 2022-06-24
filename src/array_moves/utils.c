/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:49:50 by kzak              #+#    #+#             */
/*   Updated: 2022/06/24 15:56:16 by kzak             ###   ########.fr       */
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

int	is_sort(t_stack *stack)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i != stack->la)
	{
		j = i + 1;
		while (j != stack->la)
		{
			if (stack->a[i] > stack->a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	find_min(t_stack *stack)
{
	size_t	i;
	int		t;

	i = 1;
	t = stack->a[0];
	while (i < stack->la)
	{
		if (stack->a[i] < t)
			t = stack->a[i];
		i++;
	}
	return (t);
}
