/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:42:44 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 09:00:27 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sortB2(t_push_swap *stack)
{
	if (stack->b->content < stack->b->next->content
		&& stack->b->next->content > stack->b->next->next->content)
	{
		if (stack->b->content > stack->b->next->next->content)
		{
			sb(stack);
			do_pa(stack, 2);
			return(pa(stack));
		}
		pa(stack);
		ra(stack);
		do_pa(stack, 2);
		return (rra(stack));
	}
	if (stack->b->content < stack->b->next->content
		&& stack->b->next->content < stack->b->next->next->content)
	{
		pa(stack);
		ra(stack);
		sb(stack);
		do_pa(stack, 2);
		return(rra(stack));
	}
}

static void	sortB(t_push_swap *stack)
{
	if (is_sort(stack->b, STACK_B, 3))
	{
		do_pa(stack, 2);
		return (pa(stack));
	}
	if (stack->b->content > stack->b->next->content
		&& stack->b->next->content < stack->b->next->next->content)
	{
		if (stack->b->content > stack->b->next->next->content)
		{
			pa(stack);
			sb(stack);
			pa(stack);
			return (pa(stack));
		}
		pa(stack);
		sb(stack);
		pa(stack);
		sa(stack);
		return(pa(stack));
	}
	sortB2(stack);
}

static void	sortA2(t_push_swap *stack)
{
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content)
	{
		if (stack->a->content < stack->a->next->next->content)
			return (sa(stack));
		sa(stack);
		ra(stack);
		sa(stack);
		return (rra(stack));
	}
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content)
	{
			sa(stack);
			ra(stack);
			sa(stack);
			rra(stack);
			return (sa(stack));
	}
}
static void	sortA(t_push_swap *stack)
{
	if (is_sort(stack->a, STACK_A, 3))
		return ;
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content)
	{
		if (stack->a->content > stack->a->next->next->content)
		{
			ra(stack);
			sa(stack);
			rra(stack);
			return (sa(stack));
		}
		ra(stack);
		sa(stack);
		return (rra(stack));
	}
	sortA2(stack);
}

void	sort_small(t_push_swap *stack, int n, int index)
{
	if (index == STACK_A)
	{
		if (n == 2 && stack->a->content > stack->a->next->content)
			return (sa(stack));
		else if (n == 3)
			return (sortA(stack));
	}
	else if (index == STACK_B)
	{
		if (n == 1)
			return (pa(stack));
		if (n == 2)
		{
			if (stack->b->content < stack->b->next->content)
				sb(stack);
			pa(stack);
			return (pa(stack));
		}
		if (n == 3)
			return (sortB(stack));
	}
}
