/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:13 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 13:43:12 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_position_2(t_stack *stack, int min)
{
	size_t	i;

	i = 0;
	while (i <= stack->la)
	{
		if (stack->a[i] == min)
		{
			if (i > (stack->la / 2))
			{
				while (stack->a[0] != min)
					rra(stack);
			}
			else
			{
				while (stack->a[0] != min)
					ra(stack);
			}
		}
		i++;
	}
}

void	special_case(t_stack *stack)
{
	int		min;
	int		c;
	size_t	i;

	c = 0;
	i = stack->la;
	while (i != 5)
	{
		min = find_min(stack);
		find_position_2(stack, min);
		pb(stack);
		c++;
		i--;
	}
	fivecase(stack);
	while (c != 0)
	{
		pa(stack);
		c--;
	}
}

void	push_to_b2(t_stack *stack, int *pivot)
{
	size_t	i;
	int		n;
	
	n = 0;
	while (n != 4)
	{
		i = stack->la;
		// printf("PIVOT NUMERO : %d\n\n", pivot[n]);
		while (i != 0)
		{
			if (stack->a[0] < pivot[n])
				pb(stack);
			else if (stack->a[0] >= pivot[n])
				ra(stack);
			i--;
		}
		n++;
	}
}

void	push_to_b(t_stack *stack, int *pivot)
{
	size_t	i;
	int		n;
	
	n = 0;
	while (n != 3)
	{
		i = stack->la;
		// printf("PIVOT NUMERO : %d\n\n", pivot[n]);
		while (i != 0)
		{
			if (stack->a[0] < pivot[n])
				pb(stack);
			else if (stack->a[0] >= pivot[n])
				ra(stack);
			i--;
		}
		n++;
	}
}

void	hundred_case(t_stack *stack)
{
	int	pivot[3];

	find_pivot100(stack, pivot);
	// if (stack->la == 12)
		push_to_b(stack, pivot);
	// else
	// 	push_to_b2(stack, pivot);
	// threecase(stack);
	special_case(stack);
	sort_b(stack);
}
