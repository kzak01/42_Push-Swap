/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:46:02 by kzak              #+#    #+#             */
/*   Updated: 2022/09/13 14:16:53 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

static void	insert_k(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i <= stack->lb)
	{
		stack->z[i] = stack->b[i];
		i++;
	}
	i = 0;
	while (i != stack->lb)
	{
		j = i + 1;
		while (j != stack->lb)
		{
			if (stack->z[i] < stack->z[j])
				ft_swap(&stack->z[i], &stack->z[j]);
			j++;
		}
		i++;
	}
}

void	find_maxb(t_stack *stack, int *max)
{
	int	i;

	i = 0;
	insert_k(stack);
	while (i < 19)
	{
		max[i] = stack->z[i];
		i++;
	}
}

int	count_n(t_stack *stack, int *max, int i, int index)
{
	int	n;

	n = 0;
	if (index == 1)
	{
		while (i > 0)
		{
			if (stack->b[i] == max[n])
				n++;
			i--;
		}
	}
	if (index == 0)
	{
		while (i < stack->lb)
		{
			if (stack->b[i] == max[n])
				n++;
			i++;
		}
	}
	return (n);
}
