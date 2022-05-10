/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:55:58 by kzak              #+#    #+#             */
/*   Updated: 2022/05/10 10:44:03 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[2] < stack->a[0])
		ra(stack);
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] < stack->a[0])
		rra(stack);
	if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] < stack->a[0])
	{
		sa(stack);
		rra(stack);
	}
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] > stack->a[0])
	{
		sa(stack);
		ra(stack);
	}
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[2] > stack->a[0])
		sa(stack);
	return (stack->a[3]);
}

void	threecase(t_stack *stack)
{
	printf("\n");
	printf("%d %d %d\n", stack->a[0], stack->a[1], stack->a[2]);
	printf("\n");
	sort(stack);
	printf("\n");
	printf("%d %d %d\n", stack->a[0], stack->a[1], stack->a[2]);
}
