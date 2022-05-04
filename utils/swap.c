/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:52:13 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/04 11:23:19 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(int *a, size_t l)
{
	int	t;

	if (l > 1)
	{
		t = a[0];
		a[0] = a[1];
		a[1] = t;
	}	
	ft_printf("sa\n");
}

void	sb(int *b, size_t l)
{
	int	t;

	if (l > 1)
	{
		t = b[0];
		b[0] = b[1];
		b[1] = t;
	}
	ft_printf("sb\n");
}

void	ss(int *a, int *b, size_t la, size_t lb)
{
	if (la > 0 || lb > 0)
	{
		sa(a, la);
		sb(b, lb);
		ft_printf("ss\n");
	}
}
