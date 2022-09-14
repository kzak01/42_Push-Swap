/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:04:31 by mvolpi            #+#    #+#             */
/*   Updated: 2022/09/13 14:18:17 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	first;

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
	}
}

void	rrb(t_stack *stack)
{
	int	i;
	int	first;

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
		ft_printf("rrb\n");
	}
}

static void	rr2(t_stack *stack, int i, int first)
{
	first = 0;
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

void	rrr(t_stack *stack)
{
	int	i;
	int	first;

	ft_printf("rrr\n");
	if (stack->la > 0 || stack->lb > 0)
	{
		first = 0;
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
		rr2(stack, i, first);
	}
}
