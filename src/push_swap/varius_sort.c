/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:09:03 by kzak              #+#    #+#             */
/*   Updated: 2022/06/22 08:38:20 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	varius_sort(t_stack *stack)
{
	if (stack->la == 2 && stack->a[0] > stack->a[1])
		return (sa(stack));
	else if (stack->la == 3)
		return (threecase(stack));
	// else if (stack->la == 4)
	// 	return (fourcase(stack));
	// else if (stack->la == 5)
	// 	return (fivecase(stack));
	else if (stack->la <= 10)
		return (tencase(stack));
	else if (stack->la <= 100)
		return (hundred_case(stack));
	// else 
	// 	return (five_hundred_case(stack));
}
