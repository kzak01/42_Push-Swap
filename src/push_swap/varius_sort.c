/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:00:25 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 14:39:56 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	varius_sort(t_push_swap *stack)
{
	int		n;

	n = stack_size(stack->a);
	if (n == 5)
		return (fivecase(stack, n));
	if (n == 3)
		return (sort(stack));
	if (n == 2 && stack->a->content > stack->a->next->content)
		return (operator("sa", stack));
	return (sort_a(stack, n));
}
