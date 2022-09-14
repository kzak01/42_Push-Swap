/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:52:13 by mvolpi            #+#    #+#             */
/*   Updated: 2022/09/13 14:18:22 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	sa(t_stack *stack)
{
	int	t;

	if (stack->la > 1)
	{
		t = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = t;
	}	
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	t;

	if (stack->lb > 1)
	{
		t = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = t;
	}
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	int	t;

	ft_printf("ss\n");
	if (stack->la > 0 || stack->lb > 0)
	{
		if (stack->la > 1)
		{
			t = stack->a[0];
			stack->a[0] = stack->a[1];
			stack->a[1] = t;
		}
		if (stack->lb > 1)
		{
			t = stack->b[0];
			stack->b[0] = stack->b[1];
			stack->b[1] = t;
		}
	}
}
