/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 12:19:48 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_max(t_push_swap *stack, int max)
{
	if (max == stack->a->content)
		operator("pb", stack);
	else if (max == stack->a->next->content)
	{
		operator("sa", stack);
		operator("pb", stack);
	}
	else if (max == stack->a->next->next->content)
	{
		operator("rra", stack);
		operator("rra", stack);
		operator("pb", stack);
	}
	else if (max == stack->a->next->next->next->content)
	{
		operator("rra", stack);
		operator("pb", stack);
	}
}

void	sort_min(t_push_swap *stack, int min)
{
	if (min == stack->a->content)
		operator("pb", stack);
	else if (min == stack->a->next->content)
	{
		operator("sa", stack);
		operator("pb", stack);
	}
	else if (min == stack->a->next->next->content)
	{
		operator("rra", stack);
		operator("rra", stack);
		operator("rra", stack);
		operator("pb", stack);
	}
	else if (min == stack->a->next->next->next->content)
	{
		operator("rra", stack);
		operator("rra", stack);
		operator("pb", stack);
	}
	else if (min == stack->a->next->next->next->next->content)
	{
		operator("rra", stack);
		operator("pb", stack);
	}
}
