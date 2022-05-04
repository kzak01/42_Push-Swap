/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:55:58 by kzak              #+#    #+#             */
/*   Updated: 2022/05/04 11:26:28 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort(int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] < a[0])
		ra(a, 3);
	if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0])
		rra(a, 3);
	if (a[0] > a[1] && a[1] > a[2] && a[2] < a[0])
	{
		sa(a, 3);
		rra(a, 3);
	}
	if (a[0] < a[1] && a[1] > a[2] && a[2] > a[0])
	{
		sa(a, 3);
		ra(a, 3);
	}
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[0])
		sa(a, 3);
	return (a[3]);
}

void	threecase(char **argv)
{
	int	a[3];
	int	i;
	int	g;

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
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("\n");
	sort(a);
	printf("\n");
	printf("%d %d %d\n", a[0], a[1], a[2]);
}
