/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:02:10 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 13:48:23 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*insert_into_array(t_stack *stack, int n)
{
	int	i;
	int	*array;

	array = (int *) malloc (sizeof(int) * (n + 1));
	i = 0;
	while (i < n)
	{
		array[i] = stack->content;
		stack = stack->next;
		++i;
	}
	return (array);
}

static void	swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	find_pivot(int pivot[], t_stack *stack, int n)
{
	int	i;
	int	j;
	int	*temp;

	temp = insert_into_array(stack, n);
	i = 0;
	while (i < n -1)
	{
		j = i + 1;
		while (j < n)
		{
			if (temp[i] < temp[j])
				swap(&temp[i], &temp[j]);
			++j;
		}
		++i;
	}
	pivot[1] = temp[n / 3];
	pivot[0] = temp[(n * 2) / 3];
	free(temp);
}
