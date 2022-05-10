/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/10 11:49:56 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_max(t_stack *stack, int max)
{
	if (max == stack->a[0])
		pb (stack);
	else if (max == stack->a[1])
	{
		sa(stack);
		pb (stack);
	}
	else if (max == stack->a[2])
	{
		rra(stack);
		rra(stack);
		pb (stack);
	}
	else if (max == stack->a[3])
	{
		rra(stack);
		pb (stack);
	}
}

void	sort_min(t_stack *stack, int min)
{
	if (min == stack->a[0])
		pb (stack);
	else if (min == stack->a[1])
	{
		sa(stack);
		pb (stack);
	}
	else if (min == stack->a[2])
	{
		rra(stack);
		rra(stack);
		rra(stack);
		pb (stack);
	}
	else if (min == stack->a[3])
	{
		rra(stack);
		rra(stack);
		pb (stack);
	}
	else if (min == stack->a[4])
	{
		rra(stack);
		pb (stack);
	}
}
