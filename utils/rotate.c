/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:55:24 by mvolpi            #+#    #+#             */
/*   Updated: 2022/06/10 15:16:37 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack)
{
	size_t	i;
	int		end;

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
	// printarray(stack);
}

void	rb(t_stack *stack)
{
	size_t	i;
	int		end;

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
	// printarray(stack);
}

void	rr(t_stack *stack)
{
	if (stack->la > 0 || stack->lb > 0)
	{
		ra(stack);
		rb(stack);
		ft_printf("rr\n");
		// printarray(stack);
	}
}
