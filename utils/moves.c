/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/03 11:44:23 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(int *a, int *b)
{
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;

	c = b[0];
	d = b[1];
	e = b[2];
	f = b[3];
	g = b[4];
	b[0] = a[0];
	b[1] = c;
	b[2] = d;
	b[3] = e;
	b[4] = f;
	c = a[0];
	d = a[1];
	e = a[2];
	f = a[3];
	g = a[4];
	a[0] = d;
	a[1] = e;
	a[2] = f;
	a[3] = g;
	// a[4] = INT_MAX + 1;
	write (1, "pb\n\n", 4);
}

void	pa(int *a, int *b)
{
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;

	c = a[0];
	d = a[1];
	e = a[2];
	f = a[3];
	g = a[4];
	a[0] = b[0];
	a[1] = c;
	a[2] = d;
	a[3] = e;
	a[4] = f;
	c = b[0];
	d = b[1];
	e = b[2];
	f = b[3];
	g = b[4];
	b[0] = d;
	b[1] = e;
	b[2] = f;
	b[3] = g;
	// b[4] = INT_MAX + 1;
	write (1, "pa\n\n", 4);
}

int	sort_max(int a[5], int b[5], int d)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (d == a[0])
	{
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[1])
	{
		sa_2(a);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[2])
	{
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[3])
	{
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[4])
	{
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	return (a[5]);
	return (b[5]);
}

int	sort_min(int a[5], int b[5], int d)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (d == a[0])
	{
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[1])
	{
		sa_2(a);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[2])
	{
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[3])
	{
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[4])
	{
		rra_2(a);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	return (a[5]);
	return (b[5]);
}
