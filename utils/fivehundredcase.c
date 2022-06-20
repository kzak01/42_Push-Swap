/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:22:42 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/20 12:28:35 by vbellucc         ###   ########.fr       */
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


void    push_chunk(t_stack *stack,t_chunk *chunk)
{
    int i;
    size_t j;
    size_t k;
    int l;
    int m;
    
    i = 0;
    j = stack->la;
    k = 0;
    l = 0;
    m = 0;
    
    printf("chunk e %d\n", chunk->ca);
    while(k <= stack->la / 2)
    {
        while(i != chunk->ca)
        {
            if(stack->a[k] == chunk->a[i])
            {
                printf("entra");
                break;
            }
            i++;
        }
        k++;
     }
    while (j > stack->la / 2)
    {
        while(l != chunk->ca)
        {
            if(stack->a[j] == chunk->a[l])
            {
                printf("entra2");
                break;
            }
            l++;
        }
        j--;
        m++;
    }
    printf ("k e %zu\n", k);
    printf("m e %d\n", m);
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
                chunk->a[chunk->ca] = stack->c[j];
                chunk->ca++;
                m++;
                k++;
                j = -1;
            }
            else if (j >= 100 && j <= 199)
            {
                chunk->b[chunk->cb] = stack->c[j];
                chunk->cb++;
                m++;
                k++;
                j = -1;
            }
            else if (j >= 200 && j <= 299)
            {
                chunk->c[chunk->cc] = stack->c[j];
                chunk->cc++;
                m++;
                k++;
                j = -1;
            }
            else if (j >= 300 && j <= 399)
            {
                chunk->d[chunk->cd] = stack->c[j];
                chunk->cd++;
                m++;
                k++;
                j = -1;
            }
            else
            {
                chunk->e[chunk->ce] = stack->c[j];
                chunk->ce++;
                m++;
                k++;
                j = -1;
            }
        }
        j++;
    }
    chunk_order(chunk->a, chunk->ca);
    chunk_order(chunk->b, chunk->cb);
    
    if(chunk->ce > 0)
    {
        chunk_order(chunk->c, chunk->cc);
        chunk_order(chunk->d, chunk->cd);
        chunk_order(chunk->e, chunk->ce);
    }

    else if(chunk->cd > 0)
    {
        
        chunk_order(chunk->d, chunk->cd);
        chunk_order(chunk->c, chunk->cc);
    }
    else if (chunk->cc > 0)
    {
        chunk_order(chunk->c, chunk->cc);
    }
    
    printchunk(chunk);
    // printarray(stack);
    // printc(stack); 
    push_chunk(stack, chunk);    
}