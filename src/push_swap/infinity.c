/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infinity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:35:11 by kzak              #+#    #+#             */
/*   Updated: 2022/06/24 13:55:37 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	infinity(t_stack *stack)
{
	int	pivot[7];

	find_pivot(stack, pivot);
	push_to_b(stack, pivot, 7);
	special_case(stack);
	sort_b(stack);
}
