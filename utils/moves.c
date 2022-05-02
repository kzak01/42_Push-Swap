/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/02 12:05:41 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(int *a, int *b)
{
	int	j;
	int	k;
	int	t[5];

	j = 0;
	k = 1;
	while(j < 6)
	{
		b[k] = b[j];
		j++;
		k++;
	}
	
	t[0] = a[0];
	a[0] = a[1];
	t[1] = b[0];
	b[0] = t[0];
	
	j = 0;
	k = 1;
	while (j < 6)
	{
		a[j] = a[k];
		j++;
		k++;
	}
	write (1, "pb\n", 3);
	return ;
}

void	pa(int *a, int *b)
{
	int	j;
	int	k;
	int	t[5];

	j = 0;
	k = 1;
	while(j < 6)
	{
		a[k] = a[j];
		j++;
		k++;
	}
	
	t[0] = b[0];
	b[0] = b[1];
	t[1] = a[0];
	a[0] = t[0];
	
	j = 0;
	k = 1;
	while (j < 6)
	{
		b[j] = b[k];
		j++;
		k++;
	}
	write (1, "pa\n", 3);
	return ;
}

int	sort_max(int a[5], int b[5], int d, char **argv)
{
	int	i;
	int	j;
	int	h[5];
	
	i = 0;
	j = 1;
	while (i < 5)
	{
		h[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
		if (d == a[0])
	{
		pb(a, b);
		printf("%d %d\n", b[0], b[1]);
		printf("%d %d %d\n", a[0], a[1], a[2]);
	}
	else if (d == a[1])
	{
		sa(a);
		pb(a, b);
		printf("%d %d\n", b[0], b[1]);
		printf("%d %d %d\n",a[0], a[1], a[2]);
	}
	else if (d == a[2])
	{
		rra(a);
		rra(a);
		rra(a);
		pb(a, b);
		printf("%d %d\n", b[0], b[1]);
		printf("%d %d %d\n", a[0], a[1], a[2]);
	}
	else if (d == a[3])
	{
		rra(a);
		rra(a);
		pb(a, b);
		printf("%d %d\n", b[0], b[1]);
		printf("%d %d %d\n", a[0], a[1], a[2]);
	}
	else if (d == a[4])
	{
		rra(a);
		pb(a, b);
		printf("%d %d\n", b[0], b[1]);
		printf("%d %d %d\n", a[0], a[1], a[2]);
	}
	return (a[5]);
	return (b[5]);
}

int	sort_min(int a[5], int b[5], int d, char **argv)
{
	int	i;
	int	j;
	int	h[5];
	
	i = 0;
	j = 1;
	while (i < 5)
	{
		h[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
			if (d == a[0])
	{
		pb(a, b);
		printf("%d\n", b[0]);
		printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	}
	else if (d == a[1])
	{
		sa(a);
		pb(a, b);
		printf("%d\n", b[0]);
		printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	}
	else if (d == a[2])
	{
		rra(a);
		rra(a);
		rra(a);
		pb(a, b);
		printf("%d\n", b[0]);
		printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	}
	else if (d == a[3])
	{
		rra(a);
		rra(a);
		pb(a, b);
		printf("%d\n", b[0]);
		printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	}
	else if (d == a[4])
	{
		rra(a);
		pb(a, b);
		printf("%d\n", b[0]);
		printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	}
	return (a[5]);
	return (b[5]);
}