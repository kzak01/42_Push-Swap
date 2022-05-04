/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:06:59 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/04 11:33:16 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(int *a, int *b, size_t la, size_t lb)
{
	size_t	i;

	i = la + 1;
	if (lb > 0)
	{
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[i] = b[0];
	}
	i = 0;
	while (i < lb - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	lb = lb - 1;
	la = la + 1;
	ft_printf("pa\n");
}

void	pb(int *b, int *a, size_t la, size_t lb)
{
	size_t	i;

	i = lb + 1;
	if (la > 0)
	{
		while (i > 0)
		{
			b[i] = b[i - 1];
			i--;
		}
		b[i] = a[0];
	}
	i = 0;
	while (i < la - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	la = la - 1;
	lb = lb + 1;
	ft_printf("pb\n");
}
