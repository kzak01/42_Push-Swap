/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printarray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:06:30 by kzak              #+#    #+#             */
/*   Updated: 2022/05/20 12:24:24 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printarray(t_stack *st)
{
	size_t	j;

	j = 0;
	printf("Stack A:");
	while (j < st->la)
	{
		printf("  %d", st->a[j]);
		j++;
	}
	printf("\n");
	j = 0;
	printf("Stack B:");
	while (j < st->lb)
	{
		printf("  %d", st->b[j]);
		j++;
	}
	printf("\n");
}