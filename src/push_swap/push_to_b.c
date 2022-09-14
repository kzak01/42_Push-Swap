/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:33:35 by kzak              #+#    #+#             */
/*   Updated: 2022/09/13 14:16:45 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

static int	how_many(t_stack *stack, int n)
{
	int	i;

	i = 0;
	if (n == 1)
	{
		while (stack->k[i] != stack->k[(stack->lk / 2)])
			i++;
	}
	else if (n != 1)
	{
		while (stack->k[i] != stack->k[stack->lk / 4])
			i++;
	}
	return (i);
}

static void	find_less(t_stack *stack, int pivot)
{
	int	cont[2];

	cont[0] = 0;
	cont[1] = stack->la;
	while (cont[0] <= stack->la / 2)
	{
		if (stack->a[cont[0]] < pivot && stack->a[cont[1]] < pivot
			&& stack->a[cont[0]] > stack->a[cont[1]])
		{
			rra(stack);
			break ;
		}
		if (stack->a[cont[0]] < pivot)
		{
			ra(stack);
			break ;
		}
		else if (stack->a[cont[1]] < pivot)
		{
			rra(stack);
			break ;
		}
		cont[0]++;
		cont[1]--;
	}
}

static void	first_pivot(t_stack *stack, int *pivot, int *i, int *m)
{
	if (stack->a[0] >= pivot[1])
	{
		ra(stack);
		--(*i);
	}
	else
	{
		pb(stack);
		++(*m);
		if (stack->b[0] < pivot[0])
		{
			if (stack->a[0] >= pivot[1])
			{
				rr(stack);
				--(*i);
			}
			else
				rb(stack);
		}
	}
}

static void	other_pivot(t_stack *stack, int pivot, int *i, int *m)
{
	if (stack->a[0] < pivot)
	{
		pb(stack);
		++(*m);
	}
	else if (stack->a[0] >= pivot)
		find_less(stack, pivot);
	if (stack->a[0] < pivot)
	{
		pb(stack);
		++(*m);
	}
	--(*i);
}

void	push_to_b(t_stack *stack, int *pivot, int index)
{
	int	i;
	int	n;
	int	m;

	n = 1;
	while (n != index)
	{
		i = stack->la;
		m = 0;
		while (i != 0 && m != how_many(stack, n))
		{
			if (n == 1)
				first_pivot(stack, pivot, &i, &m);
			if (n != 1)
				other_pivot(stack, pivot[n], &i, &m);
		}
		n++;
	}
}
