/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:04:31 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/06 10:36:24 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack stack)
{
	size_t	i;
	int		first;

	i = stack.la - 1;
	if (stack.la > 0)
	{
		first = stack.a[stack.la - 1];
		while (i > 0)
		{
			stack.a[i] = stack.a[i - 1];
			i--;
		}
		stack.a[i] = first;
		ft_printf("rra\n");
	}
}

void	rrb(int *b, size_t l)
{
	size_t	i;
	int		first;

	i = l - 1;
	if (l > 0)
	{
		first = b[l - 1];
		while (i > 0)
		{
			b[i] = b[i - 1];
			i--;
		}
		b[i] = first;
		ft_printf("rrb\n");
	}
}

// void	rrr(int *a, int *b, size_t la, size_t lb)
// {
// 	if (la > 0 || lb > 0)
// 	{
// 		rra(a, la);
// 		rrb(b, lb);
// 		ft_printf("rrr\n");
// 	}
// }
