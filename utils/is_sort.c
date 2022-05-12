/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:10:03 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/12 10:26:42 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
