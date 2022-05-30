/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:52:32 by kzak              #+#    #+#             */
/*   Updated: 2022/05/30 10:56:29 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack *stack, int type, int n)
{
	int		check;

	if (stack == NULL)
		return (1);
	check = stack->content;
	stack = stack->next;
	while (--n > 0 && stack)
	{
		if (type == DESC)
		{
			if (stack->content > check)
				return (0);
			check = stack->content;
		}
		else if (type == ASC)
		{
			if (stack->content < check)
				return (0);
			check = stack->content;
		}
		stack = stack->next;
	}
	return (1);
}

long	atoilong(const char *str)
{
	long	res;
	int		sign;
	size_t	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((res * sign));
}

static void	sort2(t_push_swap *stack)
{
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
	{
		operator("sa", stack);
		operator("ra", stack);
	}
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
		operator("sa", stack);
}

void	sort(t_push_swap *stack)
{
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		operator("ra", stack);
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		operator("rra", stack);
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
	{
		operator("sa", stack);
		operator("rra", stack);
	}
	sort2(stack);
}
