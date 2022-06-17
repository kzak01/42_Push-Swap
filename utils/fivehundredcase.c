/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:22:42 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/17 12:35:37 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

 static void swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}


void fivehundredcase(t_stack *stack,t_chunk *chunk)
{ 
    int la;
    size_t k;
    size_t j;
    size_t i;
    int m;

    k = 0;
    la = stack->la / 2;
    while (k < stack->la)
    {
        stack->c[k] = stack->a[k];
        k++;
    }
    i = 0;
    while (i < stack->la - 1)
    {
        j = i + 1;
        while (j < stack->la)
        {
            if (stack->c[i] > stack->c[j])
            {
                swap(&stack->c[i], &stack->c[j]);
                m = 1;
            }
            j++;
        }
        i++;
    }
    if (m != 1)
    {
        exit(0);
    }
     
    // m = 0;
    // while(m < (int)stack->la)
	// {
    //     printf("  %d", stack->c[m]);
    //     m++;
    // }

    k = 0;
    j = 0;

    while(k <= stack->la)
    {
        if (stack->a[k] == stack->c[j])
        {
            if (j >= 0 && j <= 99)
            {
                chunk->a[chunk->ca] = stack->c[j];
                chunk->ca++;
            }
            else if (j >= 100 && j <= 199)
            {
                chunk->b[chunk->cb] = stack->c[j];
                chunk->cb++;
            }
            else if (j >= 200 && j <= 299)
            {
                chunk->b[chunk->cb] = stack->c[j];
                chunk->cb++;
            }
            else if (j >= 300 && j <= 399)
            {
                chunk->b[chunk->cb] = stack->c[j];
                chunk->cb++;
            }
            else
            {
                chunk->b[chunk->cb] = stack->c[j];
                chunk->cb++;
            }
        }
    }
}

