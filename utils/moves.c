/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 12:22:26 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_max(t_stack stack, int max)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (max == stack.a[0])
	{
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (max == stack.a[1])
	{
		sa(stack);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (max == stack.a[2])
	{
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (max == stack.a[3])
	{
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (max == stack.a[4])
	{
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	return (stack.a[5]);
	return (stack.b[5]);
}

int	sort_min(t_stack stack, int min)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (min == stack.a[0])
	{
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n",stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (min == stack.a[1])
	{
		sa(stack);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (min == stack.a[2])
	{
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (min == stack.a[3])
	{
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	else if (min == stack.a[4])
	{
		rra(stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		pb (stack);
		printf("arrey a: %d %d %d %d %d\n", stack.a[0], stack.a[1], stack.a[2], stack.a[3], stack.a[4]);
		printf("arrey b: %d %d %d %d %d\n", stack.b[0], stack.b[1], stack.b[2], stack.b[3], stack.b[4]);
	}
	return (stack.a[5]);
	return (stack.b[5]);
}
