/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/04/21 11:29:55 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pb(int a[5], int b[5])
{
	int k;
	
	k = 5;
	while(k >= 1)
	{
		b[k--] = b[k];
		k--;
	}
	b[0] = a[0];
}

int	find_max(char **argv)
{
	int	a[5];
	int	b[5];
	int	i;
	int	g;
	int t;

	g = 1;
	i = 0;

	while(g <= 5)
	{
		if (a[i] < a[g])
		{
			t = a[i];
			a[i] = a[g];
			a[g] = t;
		}
		g++;
	}
	return(a[i]);
}

int	find_min(char **argv)
{
	int	a[5];
	int	b[5];
	int	i;
	int	g;
	int t;

	g = 1;
	i = 0;

	while(g <= 5)
	{
		if (a[i] > a[g])
		{
			t = a[i];
			a[i] = a[g];
			a[g] = t;
		}
		g++;
	}
	return(a[i]);
}

void fivecase(char **argv)
{
	int a[5];
	int b[5];
	int c;
	int d;

	int i;
	int j;

	i = 0;
	j = 1;

	while (i < 5)
	{
		a[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	
	c = find_max(a);
	d = find_min(a);
	printf("%d %d", c, d);
}
