/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infinity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:35:11 by kzak              #+#    #+#             */
/*   Updated: 2022/06/24 15:05:59 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	infinity(t_stack *stack)
{
	int	pivot[7];

	find_pivot(stack, pivot, 0);
	push_to_b(stack, pivot, 7);
	special_case(stack);
	sort_b(stack);
}
