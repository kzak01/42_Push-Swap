/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:23:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/02 10:56:40 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(int a[5], int b[5])
{
	int	j;
	int	k;
	int	t[5];

	j = 0;
	k = 1;
	while(j < 6)
	{
		b[j] = b[k];
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

void	pa(int a[5], int b[5])
{
	int	j;
	int	k;
	int	t[5];

	j = 0;
	k = 1;
	while(j < 6)
	{
		a[j] = a[k];
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

void	sort_min(int a[5], int b[5])
{
	int	d;
	int	h[5];
	
	while (i < 5)
	{
		h[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	d = find_min(q);
	if (d == a[0])
		{
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (d == a[1])
		{
			sa(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (d == a[2])
		{
			rra(a);
			rra(a);
			rra(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (d == a[3])
		{
			rra(a);
			rra(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
		if (d == a[4])
		{
			rra(a);
			pb(a, b);
			printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
		}
}