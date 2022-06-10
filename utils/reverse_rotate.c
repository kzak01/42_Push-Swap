/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:04:31 by mvolpi            #+#    #+#             */
/*   Updated: 2022/06/10 15:16:50 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		// printarray(stack);
	}
}

void	rrr(t_stack *stack)
{
	if (stack->la > 0 || stack->lb > 0)
	{
		rra(stack);
		rrb(stack);
		ft_printf("rrr\n");
		// printarray(stack);
	}
}
