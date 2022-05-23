/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:39:34 by kzak              #+#    #+#             */
/*   Updated: 2022/05/23 11:44:16 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap2.h"

static void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	*stack_to_array(t_stack2 *stack, int n)
{
	int		i;
	int		*array;

	ft_malloc((void **)&array, sizeof(int) * (n + 1));
	i = 0;
	while (i < n)
	{
		array[i] = stack->content;
		stack = stack->next;
		++i;
	}
	return (array);
}

void	get_pivot(int pivot[], t_stack2 *stack, int n)
{
	int		iv[2];
	int		*array;

	array = stack_to_array(stack, n);
	iv[0] = 0;
	while (iv[0] < n - 1)
	{
		iv[1] = iv[0] + 1;
		while (iv[1] < n)
		{
			if (array[iv[0]] < array[iv[1]])
				swap_int(&array[iv[0]], &array[iv[1]]);
			++iv[1];
		}
		++iv[0];
	}
	pivot[SMALL] = array[(n * 2) / 3];
	pivot[BIG] = array[n / 3];
	free(array);
}
