/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:51:17 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 09:07:55 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static void	type_a(t_stack *stack)
{
	if (stack->a[0] < stack->a[2])
		return (sa(stack));
	sa(stack);
	ra(stack);
	sa(stack);
	rra(stack);
}

static void	type_b(t_stack *stack)
{
	sa(stack);
	ra(stack);
	sa(stack);
	rra(stack);
	sa(stack);
}

static void	type_c(t_stack *stack)
{
	ra(stack);
	sa(stack);
	rra(stack);
	sa(stack);
}

static void	type_d(t_stack *stack)
{
	ra(stack);
	sa(stack);
	rra(stack);
}

void	sort_three_a(t_stack *stack)
{
	if (check_sort_na(stack, ASC, 3))
		return ;
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2])
		return (type_a(stack));
	if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2])
		return (type_b(stack));
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2])
	{
		if (stack->a[0] > stack->a[2])
			return (type_c(stack));
		return (type_d(stack));
	}
}
