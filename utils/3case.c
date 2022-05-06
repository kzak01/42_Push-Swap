/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:55:58 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 10:34:37 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort(t_stack stack)
{
	if (stack.a[0] > stack.a[1] && stack.a[1] < stack.a[2] && stack.a[2] < stack.a[0])
		ra(stack);
	if (stack.a[0] < stack.a[1] && stack.a[1] > stack.a[2] && stack.a[2] < stack.a[0])
		rra(stack);
	if (stack.a[0] > stack.a[1] && stack.a[1] > stack.a[2] && stack.a[2] < stack.a[0])
	{
		sa(stack);
		rra(stack);
	}
	if (stack.a[0] < stack.a[1] && stack.a[1] > stack.a[2] && stack.a[2] > stack.a[0])
	{
		sa(stack);
		ra(stack);
	}
	if (stack.a[0] > stack.a[1] && stack.a[1] < stack.a[2] && stack.a[2] > stack.a[0])
		sa(stack);
	return (stack.a[3]);
}

void	threecase(t_stack stack)
{
	// int	a[3];
	// int	i;
	// int	g;

	// g = 1;
	// i = 0;
	// while (i < 3)
	// {
	// 	a[i] = ft_atoi(argv[g]);
	// 	printf("%d\n", a[i]);
	// 	i++;
	// 	g++;
	// }
	printf("\n");
	printf("%d %d %d\n", stack.a[0], stack.a[1], stack.a[2]);
	printf("\n");
	sort(stack);
	printf("\n");
	printf("%d %d %d\n", stack.a[0], stack.a[1], stack.a[2]);
}
