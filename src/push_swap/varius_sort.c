/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:24:18 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 10:22:03 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	varius_sort(t_push_swap *stack)
{
	int		n;

	n = stack->la;
	if (stack->la == 2 && stack->a->content > stack->a->next->content)
		return (sa(stack));
	if (stack->la == 3)
		return (sort(stack->a));
	if (stack->la == 5)
		return (fivecase(stack, n));
	return (sort_stack(stack, n));
}
