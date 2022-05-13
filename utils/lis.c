/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:06:49 by kzak              #+#    #+#             */
/*   Updated: 2022/05/12 10:08:51 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	_lis(t_stack *st, int n, int *max_ref)
{
	int	res;
	int	max_ending_here;
	int	i;

	i = 1;
	max_ending_here = 1;
	if (n == 1)
		return (1);
	printf("pre while %d\n", 	max_ending_here);
	while (i < n)
	{
		res = _lis(st, i, max_ref);
		printf("nel while %d\n", 	max_ending_here);
		if (st->a[i - 1] < st->a[n - 1] && res + 1 > max_ending_here)
			max_ending_here = res + 1;
		i++;
	}
	if (*max_ref < max_ending_here)
		*max_ref = max_ending_here;
	return (max_ending_here);
}

int	lis(t_stack *st, int n)
{
	int	max;

	max = 1;
	_lis(st, n ,&max);
	return (max);
}