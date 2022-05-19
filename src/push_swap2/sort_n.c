/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:28:59 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 14:33:38 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap2.h"

int	check_sort_n(t_stack2 *stack, int type, int n)
{
	int		check;

	if (stack == NULL)
		return (1);
	check = stack->content;
	stack = stack->next;
	while (--n > 0 && stack)
	{
		if (type == DESC)
		{
			if (stack->content > check)
				return (0);
			check = stack->content;
		}
		else if (type == ASC)
		{
			if (stack->content < check)
				return (0);
			check = stack->content;
		}
		stack = stack->next;
	}
	return (1);
}
