/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:22:42 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/28 11:52:02 by vbellucc         ###   ########.fr       */
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
    printf("inizia push_chunk");
    int i;
    size_t j;
    size_t k;
    size_t l;
    int m;
    int n;
    // int n;
    
    i = 0;
    j = stack->la;
    k = 0;
    l = 0;
    m = 0;
    n = chunk->ca;
    
    while(n != 0)
    {
    k = save_positionstart(stack, chunk, chunk->ca);
    l = save_positionend(stack, chunk, chunk->ca);
    push_less_move(stack, k, l);
    n--;
    // k = 0;
    // l = 0;
    }
    printarray(stack);
}

void    push_chunk2(t_stack *stack,t_chunk *chunk)
{
    printf("inizia push_chunk");
    int i;
    size_t j;
    size_t k;
    size_t l;
    int m;
    int n;
    // int n;
    
    i = 0;
    j = stack->la;
    k = 0;
    l = 0;
    m = 0;
    n = chunk->cb;
    
    while(n != 0)
    {
    k = save_positionstart2(stack, chunk, chunk->cb);
    l = save_positionend2(stack, chunk, chunk->cb);
    sleep(1);
    push_less_move(stack, k, l);
    n--;
    // k = 0;
    // l = 0;
    }
    printarray(stack);
}

void    push_chunk3(t_stack *stack,t_chunk *chunk)
{
    printf("inizia push_chunk");
    int i;
    size_t j;
    size_t k;
    size_t l;
    int m;
    int n;
    // int n;
    
    i = 0;
    j = stack->la;
    k = 0;
    l = 0;
    m = 0;
    n = chunk->cb;
    
    while(n != 0)
    {
    k = save_positionstart3(stack, chunk, chunk->cc);
    l = save_positionend3(stack, chunk, chunk->cc);
    push_less_move(stack, k, l);
    n--;
    // k = 0;
    // l = 0;
    }
    printarray(stack);
}
void    push_chunk4(t_stack *stack,t_chunk *chunk)
{
    printf("inizia push_chunk");
    int i;
    size_t j;
    size_t k;
    size_t l;
    int m;
    int n;
    // int n;
    
    i = 0;
    j = stack->la;
    k = 0;
    l = 0;
    m = 0;
    n = chunk->cb;
    
    while(n != 0)
    {
    k = save_positionstart4(stack, chunk, chunk->cd);
    l = save_positionend4(stack, chunk, chunk->cd);
    push_less_move(stack, k, l);
    n--;
    // k = 0;
    // l = 0;
    }
    printarray(stack);
}
void    push_chunk5(t_stack *stack,t_chunk *chunk)
{
    printf("inizia push_chunk");
    int i;
    size_t j;
    size_t k;
    size_t l;
    int m;
    int n;
    // int n;
    
    i = 0;
    j = stack->la;
    k = 0;
    l = 0;
    m = 0;
    n = chunk->cb;
    
    while(n != 0)
    {
    k = save_positionstart5(stack, chunk, chunk->ce);
    l = save_positionend5(stack, chunk, chunk->ce);
    push_less_move(stack, k, l);
    n--;
    // k = 0;
    // l = 0;
    }
    printarray(stack);
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
    // chunk_order(chunk->a, chunk->ca);
    // chunk_order(chunk->b, chunk->cb);
    
    // if(chunk->ce > 0)
    // {
    //     chunk_order(chunk->c, chunk->cc);
    //     chunk_order(chunk->d, chunk->cd);
    //     chunk_order(chunk->e, chunk->ce);
    // }

    // else if(chunk->cd > 0)
    // {
        
    //     chunk_order(chunk->d, chunk->cd);
    //     chunk_order(chunk->c, chunk->cc);
    // }
    // else if (chunk->cc > 0)
    // {
    //     chunk_order(chunk->c, chunk->cc);
    // }
    
    printchunk(chunk);
    // printc(stack); 
    push_chunk(stack, chunk);
    printf("inizia sort hundred");    
    sort_hundred(stack, chunk);
    sleep(5);
    push_chunk2(stack, chunk);
    sort_hundred2(stack, chunk);
    push_chunk3(stack, chunk);
    sort_hundred3(stack, chunk);
    push_chunk4(stack, chunk);
    sort_hundred4(stack, chunk);
    push_chunk5(stack, chunk);
    sort_hundred5(stack, chunk);
}