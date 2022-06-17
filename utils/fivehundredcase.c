/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:22:42 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/17 15:47:24 by ldi-masc         ###   ########.fr       */
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
    m = 0;
    chunk_division(stack,chunk);
    chunk->ca = 0;
    chunk->cb = 0;
    chunk->cc = 0;
    chunk->cd = 0;
    chunk->ce = 0;
    while(k < stack->la)
    {
        if (stack->a[m] == stack->c[j])
        {
            if (j >= 0 && j <= 99)
            {
                // printf("Entri?");
                // printf("CA è nell if %d\n", chunk->ca);
                chunk->a[chunk->ca] = stack->c[j];
                chunk->ca++;
                m++;
                k++;
                j = -1;
            }
            else if (j >= 100 && j <= 199)
            {
                // printf("Entri2?");
                chunk->b[chunk->cb] = stack->c[j];
                chunk->cb++;
                m++;
                k++;
                j = -1;
            }
            else if (j >= 200 && j <= 299)
            {
                // printf("Entri3?");
                chunk->c[chunk->cc] = stack->c[j];
                chunk->cc++;
                m++;
                k++;
                j = -1;
            }
            else if (j >= 300 && j <= 399)
            {
                // printf("Entri4?");
                chunk->d[chunk->cd] = stack->c[j];
                chunk->cd++;
                m++;
                k++;
                j = -1;
            }
            else
            {
                // printf("Entri5?");
                chunk->e[chunk->ce] = stack->c[j];
                chunk->ce++;
                m++;
                k++;
                j = -1;
            }
        }
        j++;
    }
    printchunk(chunk);
    printarray(stack);
    printc(stack);    
}