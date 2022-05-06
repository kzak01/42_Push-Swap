/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 11:24:53 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_stack stack, char **av)
{
	int	i;
	int	g;
	int	t;

	insert_into_a(av, stack);
	g = 1;
	i = 0;
	while (g < 5)
	{
		if (stack.a[i] < stack.a[g])
		{
			t = stack.a[i];
			stack.a[i] = stack.a[g];
			stack.a[g] = t;
		}
		g++;
	}
	return (stack.a[i]);
}

int	find_min(t_stack stack,char **av)
{
	int	i;
	int	g;
	int	t;

	insert_into_a(av, stack);
	g = 1;
	i = 0;
	while (g < 5)
	{
		if (stack.a[i] > stack.a[g])
		{
			t = stack.a[i];
			stack.a[i] = stack.a[g];
			stack.a[g] = t;
		}
		g++;
	}
	return (stack.a[i]);
}

void	fivecase(t_stack stack, char **av)
{
	int	max;
	int	min;

	max = find_max(stack, av);
	min = find_min(stack, av);
	printf("max = %d\nmin = %d\n", max, min);
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
