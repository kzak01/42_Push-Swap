/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:20:45 by kzak              #+#    #+#             */
/*   Updated: 2022/06/05 21:39:08 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *stack)
{
	t_push_swap	stack2;
	
	if (stack->content > stack->next->content && stack->next->content < stack->next->next->content
		&& stack->next->next->content < stack->content)
		ra(&stack2);
	if (stack->content < stack->next->content && stack->next->content > stack->next->next->content
		&& stack->next->next->content < stack->content)
		rra(&stack2);
	if (stack->content > stack->next->content && stack->next->content > stack->next->next->content
		&& stack->next->next->content < stack->content)
	{
		sa(&stack2);
		rra(&stack2);
	}
	if (stack->content < stack->next->content && stack->next->content > stack->next->next->content
		&& stack->next->next->content > stack->content)
	{
		sa(&stack2);
		ra(&stack2);
	}
	if (stack->content > stack->next->content && stack->next->content < stack->next->next->content
		&& stack->next->next->content > stack->content)
		sa(&stack2);
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
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	is_sort(t_stack *stack, int	index, int n)
{
	int	temp;

	if (stack == NULL)
		return (1);
	temp = stack->content;
	stack = stack->next;
	while (n > 0 && stack)
	{
		if (index == STACK_B)
		{
			if (stack->content > temp)
				return (0);
			temp = stack->content;
		}
		else if (index == STACK_A)
		{
			if (stack->content < temp)
				return (0);
			temp = stack->content;
		}
		stack = stack->next;
	}
	return (1);
}

void	sort_small(t_push_swap *stack, int n, int index)
{
	if (index == STACK_A)
	{
		if (n == 3)
			return (sort(stack->a));
		else if (n == 2 && stack->a->content > stack->a->next->content)
			return(sa(stack));
	}
	else if (index == STACK_B)
	{
		if (n == 3)
			return (sort(stack->b));
		if (n == 2)
		{
			if (stack->b->content < stack->b->next->content)
				sb(stack);
			pa(stack);
			return (pa(stack));
		}
		if (n == 1)
			return (pa(stack));
	}
}
