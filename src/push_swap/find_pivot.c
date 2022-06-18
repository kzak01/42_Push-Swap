/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:02:10 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:37:44 by kzak             ###   ########.fr       */
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
		i++;
	}
	return (array);
}

static void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	find_pivot(t_counter *count, t_stack *stack, int n)
{
	int	*temp;

	temp = insert_into_array(stack, n);
	while (count->i < n - 1)
	{
		count->j = count->i + 1;
		while (count->j < n)
		{
			if (temp[count->i] < temp[count->j])
				swap(&temp[count->i], &temp[count->j]);
			count->j++;
		}
		count->i++;
	}
	count->m_medium_pivot = temp[n / 3];
	count->medium_pivot = temp[(n * 2) / 3];
	free(temp);
}
