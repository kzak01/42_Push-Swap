/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/05/02 10:44:10 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(int a[5])
{
	int	i;
	int	g;
	int	t;

	g = 1;
	i = 0;
	while (g < 5)
	{
		if (a[i] < a[g])
		{
			t = a[i];
			a[i] = a[g];
			a[g] = t;
		}
		g++;
	}
	return (a[i]);
}

int	find_min(int a[5])
{
	int	i;
	int	g;
	int	t;

	g = 1;
	i = 0;
	while (g < 5)
	{
		if (a[i] > a[g])
		{
			t = a[i];
			a[i] = a[g];
			a[g] = t;
		}
		g++;
	}
	return (a[i]);
}

void	fivecase(char **argv)
{
	int	a[5];
	int	b[5];
	int	c;
	int	d;
	int	i;
	int	j;
	int h[5];
	int q[5];

	i = 0;
	j = 1;
	while (i < 5)
	{
		a[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	i = 0;
	j = 0;
	while (i < 5)
	{
		h[i] = a[j];
		q[i] = a[j];
		i++;
		j++;
	}
	c = find_max(h);
	d = find_min(q);
	printf("max = %d\n min = %d\n", c, d);
	while (i == 2)
	{
		if (c == a[0] || d == a[0])
		{
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (c == a[1] || d == a[1])
		{
			sa(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (c == a[2] || d == a[2])
		{
			rra(a);
			rra(a);
			rra(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (c == a[3] || d == a[3])
		{
			rra(a);
			rra(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (c == a[4] || d == a[4])
		{
			rra(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
	printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
	sort(a);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	pa(a, b);
	if (a[0] == c)
		ra(a);
	pa(a, b);
	if (a[0] == c)
		ra(a);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}
