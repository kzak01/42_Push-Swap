/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:55:24 by mvolpi            #+#    #+#             */
/*   Updated: 2022/09/13 14:18:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	ra(t_stack *stack)
{
	int	i;
	int	end;

	i = 0;
	if (stack->la > 0)
	{
		end = stack->a[0];
		while (i < (stack->la - 1))
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = end;
	}
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	i;
	int	end;

	i = 0;
	if (stack->lb > 0)
	{
		end = stack->b[0];
		while (i < (stack->lb - 1))
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = end;
	}
	ft_printf("rb\n");
}

static void	rr2(t_stack *stack, int i, int end)
{
	i = 0;
	end = 0;
	if (stack->lb > 0)
	{
		end = stack->b[0];
		while (i < (stack->lb - 1))
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = end;
	}
}

void	rr(t_stack *stack)
{
	int	i;
	int	end;

	ft_printf("rr\n");
	if (stack->la > 0 || stack->lb > 0)
	{
		end = 0;
		i = 0;
		if (stack->la > 0)
		{
			end = stack->a[0];
			while (i < (stack->la - 1))
			{
				stack->a[i] = stack->a[i + 1];
				i++;
			}
			stack->a[i] = end;
		}
		rr2(stack, i, end);
	}
}
