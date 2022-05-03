/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/05/03 11:19:20 by mvolpi           ###   ########.fr       */
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
	printf("max = %d\nmin = %d\n", c, d);
	sort_min(a, b, d);
	sort_max(a, b, c);
	i = 0;
	while (i < 5)
	{
		if (a[0] == 0)
		{
			ra_2(a);
			printf("sposto lo zero\n");
			printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		}
		else if (a[1] == 0)
		{
			sa_2(a);
			printf("sposto lo zero");
			printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
		}
		else if (a[2] == 0)
			exit(0);
		i++;
	}
	sort(a);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	pa(a, b);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	ra_2(a);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	pa(a, b);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}
