/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:55:24 by mvolpi            #+#    #+#             */
/*   Updated: 2022/05/06 10:36:14 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack stack)
{
	size_t	i;
	int		end;

	i = 0;
	if (stack.la > 0)
	{
		end = stack.a[0];
		while (i < (stack.la - 1))
		{
			stack.a[i] = stack.a[i + 1];
			i++;
		}
		stack.a[i] = end;
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

// void	rr(int *a, int *b, size_t la, size_t lb)
// {
// 	if (la > 0 || lb > 0)
// 	{
// 		ra(a, la);
// 		rb(b, lb);
// 		ft_printf("rr\n");
// 	}
// }
