/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:20:45 by kzak              #+#    #+#             */
/*   Updated: 2022/06/14 14:20:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_push_swap *stack)
{
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
	{
		sa(stack);
		ra(stack);
	}
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
		sa(stack);
}

void	sort(t_push_swap *stack)
{
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		ra(stack);
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		rra(stack);
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
	{
		sa(stack);
		rra(stack);
	}
	sort_2(stack);
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

void	free_str(char **str)
{
	t_counter	count;

	count.i = 0;
	while (str[count.i])
	{
		free(str[count.i]);
		count.i++;
	}
	free(str);
}

int	is_sort(t_stack *stack, int index, int n)
{
	t_counter	count;

	if (stack == NULL)
		return (1);
	count.temp = stack->content;
	stack = stack->next;
	while (--n > 0 && stack)
	{
		if (index == STACK_A)
		{
			if (stack->content < count.temp)
				return (0);
			count.temp = stack->content;
		}
		else if (index == STACK_B)
		{
			if (stack->content > count.temp)
				return (0);
			count.temp = stack->content;
		}
		stack = stack->next;
	}
	return (1);
}