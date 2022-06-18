/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:20:45 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 13:18:31 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fourcase(t_push_swap *stack, int n)
{
	int	max;
	
	max = find_max(stack->a, n);
	sort_max(stack, max);
	sort(stack);
	pa(stack);
	ra(stack);
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

int	is_sort(t_stack *stack, int n, int index)
{
	t_counter	count;

	if (stack == NULL)
		return (1);
	count.temp = stack->content;
	stack = stack->next;
	while (stack && --n > 0)
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
