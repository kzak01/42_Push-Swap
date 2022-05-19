/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printarray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:06:30 by kzak              #+#    #+#             */
/*   Updated: 2022/05/19 13:41:15 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printarray(t_stack *st)
{
	size_t	j;

	j = 0;
	ft_printf("Stack A:");
	while (j < st->la)
	{
		ft_printf("  %d", st->a[j]);
		j++;
	}
	ft_printf("\n");
	j = 0;
	ft_printf("Stack B:");
	while (j < st->lb)
	{
		ft_printf("  %d", st->b[j]);
		j++;
	}
	ft_printf("\n");
}
