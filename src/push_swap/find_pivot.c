/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:57:04 by kzak              #+#    #+#             */
/*   Updated: 2022/09/13 14:16:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	find_pivot(t_stack *stack, int *pivot, int index)
{
	if (index == 1)
	{
		pivot[0] = stack->k[stack->lk / 4];
		pivot[1] = stack->k[stack->lk / 2];
		pivot[2] = stack->k[(stack->lk / 2) + (stack->lk / 4)];
	}
	if (index == 0)
	{
		pivot[0] = stack->k[stack->lk / 8];
		pivot[1] = stack->k[stack->lk / 4];
		pivot[2] = stack->k[(stack->lk / 4) + (stack->lk / 8)];
		pivot[3] = stack->k[stack->lk / 2];
		pivot[4] = stack->k[(stack->lk / 2) + (stack->lk / 8)];
		pivot[5] = stack->k[(stack->lk / 2) + (stack->lk / 4)];
		pivot[6] = stack->k[(stack->lk / 2)
			+ (stack->lk / 4) + (stack->lk / 8)];
	}
}
