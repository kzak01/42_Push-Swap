/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:39:34 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 09:07:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_int(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	*stack_to_arrayb(t_stack *stack, int n)
{
	int		i;
	int		*array;

	array = (int *) malloc(sizeof(int) * (n + 1));
	i = 0;
	while (i < n)
	{
		array[i] = stack->b[i];
		++i;
	}
	return (array);
}

static int	*stack_to_arraya(t_stack *stack, int n)
{
	int		i;
	int		*array;

	array = (int *) malloc(sizeof(int) * (n + 1));
	i = 0;
	while (i < n)
	{
		array[i] = stack->a[i];
		++i;
	}
	return (array);
}

void	get_pivota(int *pivot, t_stack *stack, int n)
{
	int	count[2];
	int	*array;

	array = stack_to_arraya(stack, n);
	count[0] = 0;
	while (count[0] < n - 1)
	{
		count[1] = count[0] + 1;
		while (count[1] < n)
		{
			if (array[count[0]] < array[count[1]])
				swap_int(&array[count[0]], &array[count[1]]);
			++count[1];
		}
		++count[0];
	}
	pivot[SMALL] = array[(n * 2) / 3];
	pivot[BIG] = array[n / 3];
	free(array);
}

void	get_pivotb(int *pivot, t_stack *stack, int n)
{
	int	count[2];
	int	*array;

	array = stack_to_arrayb(stack, n);
	count[0] = 0;
	while (count[0] < n - 1)
	{
		count[1] = count[0] + 1;
		while (count[1] < n)
		{
			if (array[count[0]] < array[count[1]])
				swap_int(&array[count[0]], &array[count[1]]);
			++count[1];
		}
		++count[0];
	}
	pivot[SMALL] = array[(n * 2) / 3];
	pivot[BIG] = array[n / 3];
	free(array);
}