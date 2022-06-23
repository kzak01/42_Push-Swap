/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:04:31 by mvolpi            #+#    #+#             */
/*   Updated: 2022/06/23 13:14:01 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	size_t	i;
	int		first;

	i = stack->la - 1;
	if (stack->la > 0)
	{
		first = stack->a[stack->la - 1];
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[i] = first;
		ft_printf("rra\n");
		// printarray(stack);
	}
}

void	rrb(t_stack *stack)
{
	size_t	i;
	int		first;

	ft_printf("rrb\n");
	i = stack->lb - 1;
	if (stack->lb > 0)
	{
		first = stack->b[stack->lb - 1];
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[i] = first;
		// ft_printf("rrb\n");
		// printarray(stack);
	}
}

void	rrr(t_stack *stack)
{
	size_t	i;
	int		first;
	
	ft_printf("rrr\n");
	if (stack->la > 0 || stack->lb > 0)
	{
		i = stack->la - 1;
		if (stack->la > 0)
		{
			first = stack->a[stack->la - 1];
			while (i > 0)
			{
				stack->a[i] = stack->a[i - 1];
				i--;
			}
			stack->a[i] = first;
		}
		i = stack->lb - 1;
		if (stack->lb > 0)
		{
			first = stack->b[stack->lb - 1];
			while (i > 0)
			{
				stack->b[i] = stack->b[i - 1];
				i--;
			}
			stack->b[i] = first;
	}
	}
}
