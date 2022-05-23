/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:55:24 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/23 11:20:49 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	size_t	i;
	int		end;

	i = 0;
	if (stack->la > 1)
	{
		end = stack->a[0];
		while (i < (stack->la - 1))
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = end;
		ft_printf("ra\n");
		// printarray(stack);
	}
}

void	rb(t_stack *stack)
{
	size_t	i;
	int		end;

	i = 0;
	if (stack->lb > 1)
	{
		end = stack->b[0];
		while (i < (stack->lb - 1))
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = end;
		ft_printf("rb\n");
		// printarray(stack);
	}
}

void	rr(t_stack *stack)
{
	size_t	i;
	int		end;

	if (stack->la > 1 || stack->lb > 1)
	{
		i = 0;
		end = stack->a[0];
		while (i < (stack->la - 1))
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = end;
		i = 0;
		end = stack->b[0];
		while (i < (stack->lb - 1))
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = end;
		ft_printf("rr\n");
		// printarray(stack);
	}
}
