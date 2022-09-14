/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:02 by kzak              #+#    #+#             */
/*   Updated: 2022/09/13 14:16:50 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

static void	prova(int *i, t_stack *stack, int *max, int n)
{
	while (stack->b[0] != max[0])
	{
		n = count_n(stack, max, *i, 0);
		if (stack->b[0] != max[n])
			rrb(stack);
		else if (stack->b[0] == max[n])
		{
			pa(stack);
			if (stack->b[0] == max[0])
				;
			else
				ra(stack);
		}
	}
}

static void	prova_2(int *i, t_stack *stack, int *max, int n)
{
	while (stack->b[0] != max[0])
	{
		n = count_n(stack, max, *i, 1);
		if (stack->b[0] != max[n])
			rb(stack);
		else if (stack->b[0] == max[n])
		{
			pa(stack);
			if (stack->b[0] == max[0])
				;
			else if (stack->b[0] != max[n - 1])
				rr(stack);
			else
				ra(stack);
		}
	}
}

static void	find_positionb(t_stack *stack, int *max)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i <= stack->lb)
	{
		if (stack->b[i] == max[0])
		{
			if (i >= (stack->lb / 2))
				prova(&i, stack, max, n);
			else
				prova_2(&i, stack, max, n);
		}
		i++;
	}
}

static void	find_pos(t_stack *stack, int *max)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i <= stack->lb)
	{
		if (stack->b[i] == max[0])
		{
			while (stack->b[0] != max[0])
				find_positionb(stack, max);
			pa(stack);
			if (stack->a[0] > stack->a[1])
				sa(stack);
			while (stack->a[stack->la] > stack->a[stack->la - 1])
			{
				if (stack->b[stack->lb] > max[0])
					rrr(stack);
				rra(stack);
			}
		}
		i++;
	}
}

void	sort_b(t_stack *stack)
{
	int	max[20];
	int	i;

	while (stack->lb != 0)
	{
		i = stack->lb;
		while (i != 0)
		{
			stack->z = (int *)malloc(8000 * sizeof(int));
			ft_memset(stack->z, 0, sizeof(stack->lb));
			find_maxb(stack, max);
			find_pos(stack, max);
			free(stack->z);
			i--;
		}
	}
}
