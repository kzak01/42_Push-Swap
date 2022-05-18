/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:28:59 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 09:08:04 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_na(t_stack *stack, int type, int n)
{
	int		check;
	int		i;

	i = 0;
	if (stack == NULL)
		return (1);
	check = stack->a[i];
	while (--n > 0 && stack->a[i + 1])
	{
		if (type == DESC)
		{
			if (stack->a[i + 1] > check)
				return (0);
			check = stack->a[i + 1];
		}
		else if (type == ASC)
		{
			if (stack->a[i + 1] < check)
				return (0);
			check = stack->a[i + 1];
		}
		i++;
	}
	return (1);
}

int	check_sort_nb(t_stack *stack, int type, int n)
{
	int		check;
	int		i;

	i = 0;
	if (stack == NULL)
		return (1);
	check = stack->b[i];
	while (--n > 0 && stack->b[i + 1])
	{
		if (type == DESC)
		{
			if (stack->b[i + 1] > check)
				return (0);
			check = stack->b[i + 1];
		}
		else if (type == ASC)
		{
			if (stack->b[i + 1] < check)
				return (0);
			check = stack->b[i + 1];
		}
		i++;
	}
	return (1);
}