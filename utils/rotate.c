/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:55:24 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/04 11:38:14 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(int *a, size_t l)
{
	size_t	i;
	int		end;

	i = 0;
	if (l > 0)
	{
		end = a[0];
		while (i < (l - 1))
		{
			a[i] = a[i + 1];
			i++;
		}
		a[i] = end;
	}
	ft_printf("ra\n");
}

void	rb(int *b, size_t l)
{
	size_t	i;
	int		end;

	i = 0;
	if (l > 0)
	{
		end = b[0];
		while (i < (l - 1))
		{
			b[i] = b[i + 1];
			i++;
		}
		b[i] = end;
	}
	ft_printf("rb\n");
}

void	rr(int *a, int *b, size_t la, size_t lb)
{
	if (la > 0 || lb > 0)
	{
		ra(a, la);
		rb(b, lb);
		ft_printf("rr\n");
	}
}
