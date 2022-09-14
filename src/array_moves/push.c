/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:06:59 by mvolpi            #+#    #+#             */
/*   Updated: 2022/09/13 14:18:15 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	i = stack->la + 1;
	if (stack->lb > 0)
	{
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[i] = stack->b[0];
		while (i < stack->lb - 1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->lb = stack->lb - 1;
		stack->la = stack->la + 1;
		ft_printf("pa\n");
	}
}

void	pb(t_stack *stack)
{
	int	i;

	i = stack->lb + 1;
	if (stack->la > 0)
	{
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[i] = stack->a[0];
		while (i < stack->la - 1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->la = stack->la - 1;
		stack->lb = stack->lb + 1;
		ft_printf("pb\n");
	}
}
