/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:07:05 by vbellucc          #+#    #+#             */
/*   Updated: 2022/06/21 12:10:57 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void chunk_division(t_stack *stack, t_chunk *chunk)
{
    if(stack->la <= 200)
    {
        chunk->a = (int *) malloc(600000000* sizeof(int));
        chunk->b = (int *) malloc(600000000 * sizeof(int)); 
    }
    else if(stack->la <= 300)
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int));
        chunk->c = (int *) malloc(6000000 * sizeof(int));
    }
    else if(stack->la <= 400)
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int));
        chunk->c = (int *) malloc(6000000 * sizeof(int));
        chunk->d = (int *) malloc(6000000 * sizeof(int));
    }
    else
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int));
        chunk->c = (int *) malloc(6000000 * sizeof(int));
        chunk->d = (int *) malloc(6000000 * sizeof(int));
        chunk->e = (int *) malloc(6000000 * sizeof(int));
    }
}

//trova il numero nella stack->a in un chunk e salva la posizione in k  
size_t save_positionstart(t_stack *stack, t_chunk *chunk, int ca)
{
    size_t k;
    int i;
    
    k = 0;
    i = 0;
    chunk->m = 0;
    while(k < stack->la / 2 && chunk->m == 0)
    {
        while(i != ca)
        {
            if(stack->a[k] == chunk->a[i])
            {
                chunk->m = 1;
                break;
            }
            i++;
        }
        i = 0;
        if(chunk->m == 1)
            break;
        k++;
    }
    return(k);
}

//trova il numero alla fine della stack->a in un chunk e salva la posizione in l  
size_t save_positionend(t_stack *stack, t_chunk *chunk, int ca)
{
    size_t j;
    size_t l;
    int i;
    
    j = stack->la;
    chunk->m = 0;
    l = 0;
    i = 0;
    while (j > stack->la / 2 && chunk->m == 0)
    {
        while(i != ca)
        {
            if(stack->a[j] == chunk->a[i])
            {
                chunk->m = 1;
                break;
            }
            i++;
        }
        i = 0;
        if(chunk->m == 1)
            break;
        j--;
        l++;
    }
    return(l);
}

void push_less_move(t_stack *stack, int k, int l)
{
    if(k < l)
    {
        while(k > 0)
        {
            ra(stack);
            k--;
        }
        printf("pb1");
        pb(stack);
    }
    else
    {
        while(l > 0)
        {
            rra(stack);
            l--;
        }
        printf("pb2");
        pb(stack);
    }
    printarray(stack);
}





