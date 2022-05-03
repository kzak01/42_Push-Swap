/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:39:10 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/03 11:44:47 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_2(int *a)
{
	int	t;

	t = a[0];
	a[0] = a[1];
	a[1] = t;
	printf("sa_2\n");
}

void	rra_2(int *a)
{
	int	t;
	int	j;
	int	k;
	int	g;
	int	x;

	t = a[0];
	j = a[1];
	k = a[2];
	g = a[3];
	x = a[4];
	a[0] = x;
	a[1] = t;
	a[2] = j;
	a[3] = k;
	a[4] = g;
	printf("rra_2\n");
}

void	ra_2(int *a)
{
	int	t;
	int	j;
	int	k;
	int	g;
	int	x;

	t = a[0];
	j = a[1];
	k = a[2];
	g = a[3];
	x = a[4];
	a[0] = j;
	a[1] = k;
	a[2] = g;
	// if (x == INT_MAX + 1)
	// {
	// 	a[3] = t;
	// 	a[4] = 0;
	// }
	// else
	// {
	// 	a[3] = x;
	// 	a[4] = t;
	// }
	printf("ra_2\n");
}
