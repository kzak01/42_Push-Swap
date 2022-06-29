/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:02 by kzak              #+#    #+#             */
/*   Updated: 2022/06/29 16:52:33 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_k(t_stack *stack)
{
	int	i;
	int	j;
	
	i = 0;
	while(i <= stack->lb)
	{
		stack->z[i] = stack->b[i];
		i++;
	}
	i = 0;
	while (i != stack->lb)
	{
		j = i + 1;
		while (j != stack->lb)
		{
			if (stack->z[i] < stack->z[j])
				ft_swap(&stack->z[i], &stack->z[j]);
			j++;
		}
		i++;
	}
}

static void	find_maxb(t_stack *stack, int *max)
{
	int	i;

	i = 0;
	insert_k(stack);
	while (i < 19)
	{
		max[i] = stack->z[i];
		i++;
	}
}

int	count_n(t_stack *stack, int *max, int i, int index)
{
	int n;

	n = 0;
	if (index == 1)
	{
		while (i > 0)
		{
			if (stack->b[i] == max[n])
				n++;
			i--;
		}
	}
	if (index == 0)
	{
		while (i < stack->lb)
		{
			if (stack->b[i] == max[n])
				n++;
			i++;
		}
	}
	return (n);
}

static void	find_positionb(t_stack *stack, int *max)
{
	int	i;
	int	n;

	i = 0;
	while (i <= stack->lb)
	{
		if (stack->b[i] == max[0])
		{
			if (i >= (stack->lb / 2))
			{
				while (stack->b[0] != max[0])
				{
					n = count_n(stack, max, i, 0);
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
			else
			{
				while (stack->b[0] != max[0])
				{
					n = count_n(stack, max, i, 1);
					// printf("%d, %d, %d\n", n, max[0], max[n]);
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
			while(stack->a[stack->la] > stack->a[stack->la - 1])
			{
				if(stack->b[stack->lb] > max[0])
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
