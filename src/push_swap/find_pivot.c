/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:57:04 by kzak              #+#    #+#             */
/*   Updated: 2022/06/22 14:42:00 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_pivot100(t_stack *stack, int *pivot)
{
	pivot[0] = stack->k[stack->lk / 4];
	pivot[1] = stack->k[stack->lk / 2];
	pivot[2] = stack->k[(stack->lk / 2) + (stack->lk / 4)];
}
