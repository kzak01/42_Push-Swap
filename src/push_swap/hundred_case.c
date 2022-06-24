/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:13 by kzak              #+#    #+#             */
/*   Updated: 2022/06/24 14:14:55 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		find_position(stack, min);
		pb(stack);
		c++;
		i--;
	}
	tencase(stack);
	while (c != 0)
	{
		pa(stack);
		c--;
	}
}

int	how_many(t_stack *stack, int n)
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

void	half_stack(t_stack *stack, int *pivot, int i, int m)
{
	if (stack->a[0] >= pivot[1])
	{
		ra(stack);
		i--;
	}
	else
	{
		pb(stack);
		m++;
		if(stack->b[0] < pivot[0])
		{
			if (stack->a[0] > pivot[1])
			{
				rr(stack);
				i--;
			}
			else
				rb(stack);
		}
	}
}

void	find_less(t_stack *stack, int pivot)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = stack->la;
	while (i <= stack->la / 2)
	{
		if (stack->a[i] < pivot && stack->a[j] < pivot && stack->a[i] > stack->a[j])
		{
			rra(stack);
			break;
		}
		else if (stack->a[i] < pivot)
		{
			ra(stack);
			break;
		}
		else if (stack->a[j] < pivot)
		{
			rra(stack);
			break;
		}
		i++;
		j--;
	}
}

void	push_to_b(t_stack *stack, int *pivot,int index)
{
	size_t	i;
	int		n;
	int		m;

	n = 1;
	while (n != index)
	{
		i = stack->la;
		m = 0;
		// printf("PIVOT NUMERO : %d\n\n", pivot[n]);
		while (i != 0 && m != how_many(stack, n))
		{
			if (n == 1)
			{
				// half_stack(stack, pivot, i, m);
				if (stack->a[0] >= pivot[1])
				{
					ra(stack);
					// find_less(stack, pivot[n]);
					i--;
				}
				else
				{
					pb(stack);
					m++;
					if(stack->b[0] < pivot[0])
					{
						if (stack->a[0] > pivot[1])
						{
							rr(stack);
							i--;
						}
						else
							rb(stack);
					}
					// s_moves(stack);
				}
			}
			if (n != 1)
			{
				if (stack->a[0] < pivot[n])
				{
					pb(stack);
					// s_moves(stack);
					m--;
				}
				else if (stack->a[0] >= pivot[n])
					find_less(stack, pivot[n]);
				if (stack->a[0] < pivot[n])
				{
					pb(stack);
					// s_moves(stack);
					m--;
				}
				i--;
			}
			// printf("%d\n\n", m);
		}
		n++;
	}
}

void	hundred_case(t_stack *stack)
{
	int	pivot[3];

	find_pivot100(stack, pivot);
	push_to_b(stack, pivot, 3);
	special_case(stack);
	sort_b(stack);
}
