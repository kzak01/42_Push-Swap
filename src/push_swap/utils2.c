/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:17:22 by kzak              #+#    #+#             */
/*   Updated: 2022/06/24 11:24:22 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_moves(t_stack *stack)
{
	if (stack->b[0] < stack->b[1] && stack->a[0] > stack->a[1])
		ss(stack);
	else if (stack->b[0] < stack->b[1])
		sb(stack);
	else if (stack->a[0] > stack->a[1])
		sa(stack);
}
