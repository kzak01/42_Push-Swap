/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printarray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:06:30 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 10:59:23 by vbellucc         ###   ########.fr       */
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

void printchunk(t_chunk *chunk)
{
	int j;
	
	j = 0;
	printf("Primo Chunk");
	printf("ca è %d\n", chunk->ca);
	while (j < chunk->ca)
	{
		printf("   %d", chunk->a[j]);
		j++;	
	}
	printf("\n");
	
	j = 0;
	printf("Secondo Chunk");
	printf("cb è %d\n", chunk->cb);
	while (j < chunk->cb)
	{
		printf("   %d", chunk->b[j]);
		j++;	
	}
	printf("\n");

	j = 0;
	printf("Terzo Chunk");
	printf("cc è %d\n", chunk->cc);
	while (j < chunk->cc)
	{
		printf("   %d", chunk->c[j]);
		j++;	
	}
	printf("\n");

	j = 0;
	printf("Quarto Chunk");
	printf("cd è %d\n", chunk->cd);
	while (j < chunk->cd)
	{
		printf("   %d", chunk->d[j]);
		j++;	
	}
	printf("\n");

	j = 0;
	printf("Quinto Chunk");
	printf("ce è %d\n", chunk->ce);
	while (j < chunk->ce)
	{
		printf("   %d", chunk->e[j]);
		j++;	
	}
	printf("\n");				
}

void printc(t_stack *stack)
{
	int m;

	printf("\n stack C:  \n");	
	m = 0;
    while(m < (int)stack->la)
	{
        printf("  %d", stack->c[m]);
        m++;
    }
}