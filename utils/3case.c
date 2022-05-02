/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:55:58 by kzak              #+#    #+#             */
/*   Updated: 2022/04/20 10:08:06 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(int *a)
{
	int t;

	t = a[0];
	a[0] = a[1];
	a[1] = t;
	printf("sa\n");
}

void	rra(int *a)
{
	int t;

	t = a[0];
	a[0] = a[2];
	a[2] = a[1];
	a[1] = t;
	printf("rra\n");
}

void	ra(int *a)
{
	int	temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = a[2];
	a[2] = temp;
	printf("ra\n");
}

void	sort(int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] < a[0])
		ra(a);
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0])
		rra(a);
	if (a[0] > a[1] && a[1] > a[2] && a[2] < a[0])
	{
		sa(a);
		rra(a);
	}
	if (a[0] < a[1] && a[1] > a[2] && a[2] > a[0])
	{
		sa(a);
		ra(a);
	}
	if (a[0] >a[1] && a[1] < a[2] && a[2] > a[0])
		sa(a);
}

void	threecase(char **argv)
{
	int	a[3];
	int i;
	int g;

	g = 1;
	i = 0;
	while (i < 3)
	{
		a[i] = ft_atoi(argv[g]);
		printf("%d\n", a[i]);
		i++;
		g++;
	}
	printf("\n");
	printf("%d%d%d\n", a[0], a[1], a[2]);
	printf("\n");
	sort(a);
	printf("\n");
	printf("%d%d%d\n", a[0], a[1], a[2]);
}