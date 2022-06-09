/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:24:18 by kzak              #+#    #+#             */
/*   Updated: 2022/06/08 11:15:34 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	varius_sort(t_push_swap *stack)
{
	int	n;

	n = stack->la;
	if (stack->la == 2 && stack->a->content > stack->a->next->content)
		return (sa(stack));
	if (stack->la == 3)
		return (sort(stack));
	if (stack->la == 5)
		return (fivecase(stack, n));
	return (sort_stack(stack, n));
}
