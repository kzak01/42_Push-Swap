/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:57:04 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 13:27:17 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_pivot100(t_stack *stack, int *pivot)
{
	// if (stack->la == 12)
	// {
		pivot[0] = stack->k[stack->lk / 4];
		pivot[1] = stack->k[stack->lk / 2];
		pivot[2] = stack->k[(stack->lk / 2) + (stack->lk / 4)];
		// printf("pivot1 : %d\npivot2 : %d\npivot3 : %d\n", pivot[0], pivot[1], pivot[2]);
	// }
	// else if (stack->la != 12)
	// {
	// 	pivot[0] = stack->k[stack->lk / 4];
	// 	pivot[1] = stack->k[stack->lk / 2];
	// 	pivot[2] = stack->k[(stack->lk / 2) + (stack->lk / 4)];
	// 	pivot[3] = stack->k[stack->lk - 3];
	// 	// printf("pivot1 : %d\npivot2 : %d\npivot3 : %d\npivot4 : %d\n", pivot[0], pivot[1], pivot[2], pivot[3]);
	// }
}
