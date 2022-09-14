/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:09:03 by kzak              #+#    #+#             */
/*   Updated: 2022/09/14 11:47:04 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	varius_sort(t_stack *stack)
{
	if (stack->la == 2 && stack->a[0] > stack->a[1])
		return (sa(stack));
	else if (stack->la == 3)
		return (threecase(stack));
	else if (stack->la <= 16)
		return (small_case(stack));
	else if (stack->la <= 100)
		return (hundred_case(stack));
	else
		return (infinity(stack));
}
