/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:46:26 by kzak              #+#    #+#             */
/*   Updated: 2022/06/03 13:12:49 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	moves(t_push_swap *stack)

void	sort_stack(t_push_swap *stack, int n)
{
	int	*pivot;
	int	*temp;
	
	if (n <= 3)
		return (sort_small(stack, n));
	if (is_sort(stack->a, ASCENDING, n))
		return ;
	find_pivot(stack->a, pivot, n);
	while (n > 0)
		moves(stack, pivot, &n, temp);
	recursive_call(stack, temp);
}
