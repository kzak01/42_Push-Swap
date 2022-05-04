/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/04 12:18:48 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_max(int *a, int *b, int d)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (d == a[0])
	{
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[1])
	{
		sa(a, 5);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[2])
	{
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[3])
	{
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[4])
	{
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	return (a[5]);
	return (b[5]);
}

int	sort_min(int *a, int *b, int d)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (d == a[0])
	{
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[1])
	{
		sa(a, 5);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[2])
	{
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[3])
	{
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	else if (d == a[4])
	{
		rra(a, 5);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		pb (a, b, 5, 5);
		printf("array b:%d %d\n", b[0], b[1]);
		printf("arrey a: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	}
	return (a[5]);
	return (b[5]);
}
