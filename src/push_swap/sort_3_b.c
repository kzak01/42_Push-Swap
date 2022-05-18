/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:14:59 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 09:07:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type_a(t_stack *stack)
{
	if (stack->a[0] > stack->a[2])
	{
		pa(stack);
		sb(stack);
		pa(stack);
		return (pa(stack));
	}
	pa(stack);
	sb(stack);
	pa(stack);
	sa(stack);
	pa(stack);
}

static void	type_b(t_stack *stack)
{
	pa(stack);
	ra(stack);
	sb(stack);
	pa(stack);
	pa(stack);
	rra(stack);
}

static void	type_c(t_stack *stack)
{
	sb(stack);
	pa(stack);
	pa(stack);
	pa(stack);
}

static void	type_d(t_stack *stack)
{
	pa(stack);
	ra(stack);
	pa(stack);
	pa(stack);
	rra(stack);
}

void	sort_three_b(t_stack *stack)
{
	if(check_sort_nb(stack, DESC, 3))
	{
		pa(stack);
		pa(stack);
		return(pa(stack));
	}
	if (stack->b[0] > stack->b[1] && stack->b[1] < stack->b[2])
		return(type_a(stack));
	if (stack->b[0] < stack->b[1] && stack->b[1] < stack->b[2])
		return(type_b(stack));
	if (stack->b[0] < stack->b[1] && stack->b[1] > stack->b[2])
	{
		if (stack->b[0] > stack->b[2])
			return (type_c(stack));
		return(type_d(stack));
	}
}
