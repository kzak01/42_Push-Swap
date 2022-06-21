/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:13 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 13:19:17 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b2(t_stack *stack, int *pivot)
{
	size_t	i;
	int		n;
	
	n = 0;
	while (n != 4)
	{
		i = stack->la;
		// printf("PIVOT NUMERO : %d\n\n", pivot[n]);
		while (i != 0)
		{
			if (stack->a[0] < pivot[n])
				pb(stack);
			else if (stack->a[0] >= pivot[n])
				ra(stack);
			i--;
		}
		n++;
	}
}

void	push_to_b(t_stack *stack, int *pivot)
{
	size_t	i;
	int		n;
	
	n = 0;
	while (n != 3)
	{
		i = stack->la;
		// printf("PIVOT NUMERO : %d\n\n", pivot[n]);
		while (i != 0)
		{
			if (stack->a[0] < pivot[n])
				pb(stack);
			else if (stack->a[0] >= pivot[n])
				ra(stack);
			i--;
		}
		n++;
	}
}

void	hundred_case(t_stack *stack)
{
	int	pivot[4];

	find_pivot100(stack, pivot);
	if (stack->la == 12)
		push_to_b(stack, pivot);
	else
		push_to_b2(stack, pivot);
	threecase(stack);
	sort_b(stack);
}
