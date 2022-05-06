/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 12:45:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_stack stack)
{
	size_t	i;
	int	t;

	i = 1;
	t = stack.a[0];
	while (i < stack.la)
	{
		if (stack.a[i] > t)
			t = stack.a[i];
		i++;
	}
	return (t);
}

int	find_min(t_stack stack)
{
	size_t	i;
	int	t;

	i = 1;
	t = stack.a[0];
	while (i < stack.la)
	{
		if (stack.a[i] < t)
			t = stack.a[i];
		i++;
	}
	return (t);
}

void	fivecase(t_stack stack)
{
	int	max;
	int	min;

	max = find_max(stack);
	min = find_min(stack);
	printf("max = %d\nmin = %d\n", max, min);
	printf("%d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
	sort_min(stack, min);
	sort_max(stack, max);
	sort(stack);
	printf("%d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
	pa(stack);
	printf("%d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
	ra(stack);
	printf("%d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
	pa(stack);
	printf("%d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
}
