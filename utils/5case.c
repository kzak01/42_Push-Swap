/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/05/04 12:16:46 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(char **argv)
{
	int	i;
	int	g;
	int	t;
	int	h[5];

	insert_into_a(argv, h, 5);
	g = 1;
	i = 0;
	while (g < 5)
	{
		if (h[i] < h[g])
		{
			t = h[i];
			h[i] = h[g];
			h[g] = t;
		}
		g++;
	}
	return (h[i]);
}

int	find_min(char **argv)
{
	int	i;
	int	g;
	int	t;
	int	h[5];

	insert_into_a(argv, h, 5);
	g = 1;
	i = 0;
	while (g < 5)
	{
		if (h[i] > h[g])
		{
			t = h[i];
			h[i] = h[g];
			h[g] = t;
		}
		g++;
	}
	return (h[i]);
}

void	fivecase(int *a, int *b, char **argv)
{
	int	c;
	int	d;

	c = find_max(argv);
	d = find_min(argv);
	printf("max = %d\nmin = %d\n", c, d);
	sort_min(a, b, d);
	sort_max(a, b, c);
	sort(a);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	pa(a, b, 5, 5);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	ra(a, 5);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	pa(a, b, 5, 5);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}
