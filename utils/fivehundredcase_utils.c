/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:07:05 by vbellucc          #+#    #+#             */
/*   Updated: 2022/06/27 11:30:32 by vbellucc         ###   ########.fr       */
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
    printf("inizia save_positionstart\n");
    size_t k;
    int i;
    
    k = 0;
    i = 0;
    chunk->m = 0;
    // printf("k è %zu\n", k);
    // printf("i è %d\n", i);
    while(k < stack->la / 2 && chunk->m == 0)
    {
        while(i != ca)
        {
            if(stack->a[k] == chunk->a[i])
            {
                // printf("k è %zu\n", k);
                // printf("i è %d\n", i);
                printarray(stack);
                printchunk(chunk);
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
    printf("k è %zu\n", k);
    printf("finisce save_positionstart\n");
    return(k);
   
}

//trova il numero alla fine della stack->a in un chunk e salva la posizione in l  
size_t save_positionend(t_stack *stack, t_chunk *chunk, int ca)
{
    printf("inizia save_positionend\n");
    size_t j;
    size_t l;
    int i;
    
    j = stack->la;
    chunk->m = 0;
    l = 0;
    i = 0;
   
    while (j > stack->la / 2 && chunk->m == 0)
    {
        // printf("j è %zu\n", j);
        // printf("l è %zu\n", l);
        // printf("i è %d\n", i);
        // printf("la è %zu\n", stack->la);
        // printf("m è %d\n", chunk->m);
        while(i != ca)
        {
            if(stack->a[j] == chunk->a[i])
            {
                // printf("j è %zu\n", j);
                // printf("i è %d\n", i);
                printarray(stack);
                printchunk(chunk);
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
    printf("l è %zu\n", l);
    printf("finisce save_positionend\n");
    return(l);
    
}

void push_less_move(t_stack *stack, int k, int l)
{
    printf("inizia push_less_move\n");
    // printf("k è %d\n", k);
    // printf("l è %d\n", l);
    if(k < l)
    {
        while(k > 0)
        {
            ra(stack);
            k--;
        }
        //ra(stack);
        printf("pb1\n");
        pb(stack);
    }
    else if(l < k)
    {
        while(l > 1)
        {
            rra(stack);
            l--;
        }
        rra(stack);
        printf("pb2\n");
        pb(stack);
    }
    else
    {
        pb(stack);
    }
    printarray(stack);
    printf("finisce push_less_move\n");
}

void sort_hundred(t_stack *stack, t_chunk *chunk)
{
    int median;
    int mhanz;
    int medianb;
    int len;
    
    len = stack->la;
    median = find_maxb(stack);   
    mhanz = find_minb(stack);
    printf("median %d\n", median);
    printf("mhanz %d\n", mhanz);
    medianb = stack->lb / 2;
    pa_minb1(stack, medianb, mhanz);
    pa_minb2(stack, medianb, mhanz);
    printarray(stack);
    pa_maxb1(stack, medianb, median);
    pa_maxb2(stack, medianb, median);
    printf("inizia put adjacent\n");
    sleep(5);
    putadjacent_fivehundred(stack, chunk, len);
    //putadjacent(stack, len);
    printf("inizia put adjacent\n");
    printarray(stack);
    sleep(5);
    sortmaxmin(stack, len, median);
    printarray(stack);
}

void putadjacent_fivehundred(t_stack *stack, t_chunk *chunk, int len)
{
    int s;
    s = 1;
    len = chunk->ca - 2;
    printf("ca %d\n", chunk->ca);
    while(stack->lb != 0)
    {
        if (stack->b[0] == stack->c[len])
        {
            pa(stack);
            len--;
        }
        else if (stack->b[0] == stack->c[s])
        {
            pa(stack);
            ra(stack);
            s++;
        }
        else
        {
            //sleep(1);
            printf("\nlen %d\n", len);
            printf("s %d\n", s);
            printarray(stack);
            printc(stack);
            rb(stack);
            
        }
    }
}