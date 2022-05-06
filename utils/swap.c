/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:52:13 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/06 10:36:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack stack)
{
	int	t;

	if (stack.la > 1)
	{
		t = stack.a[0];
		stack.a[0] = stack.a[1];
		stack.a[1] = t;
	}	
	ft_printf("sa\n");
}

void	sb(int *b, size_t l)
{
	int	t;

	if (l > 1)
	{
		t = b[0];
		b[0] = b[1];
		b[1] = t;
	}
	ft_printf("sb\n");
}

// void	ss(int *a, int *b, size_t la, size_t lb)
// {
// 	if (la > 0 || lb > 0)
// 	{
// 		sa(a, la);
// 		sb(b, lb);
// 		ft_printf("ss\n");
// 	}
// }
