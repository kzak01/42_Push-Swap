/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:51:37 by vbellucc          #+#    #+#             */
/*   Updated: 2022/06/06 11:48:12 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa_minb1(t_stack *stack,int medianb,int mhanz)
{
    int s;
    s = 0;
     printf("medianb e : %d\n", medianb);
    while (s <= medianb)
    {
        if(stack->b[s] == mhanz)
        {
            while (stack->b[0] != mhanz)
            {
                rb(stack);
            }
            pa(stack);;
            ra(stack);
        }
        s++;
    }
     printf("\n fine minb1 : \n");
}
void pa_minb2(t_stack *stack,int medianb,int mhanz)
{
    int s;
    s = stack->lb;
    while (s >= medianb)
    {
        if(stack->b[s] == mhanz)
            {
            while (stack->b[0] != mhanz)
            {
                rrb(stack);
            }
            pa(stack);
            ra(stack);
        }
        s--;
    }
     printf("fine minb2 : \n");
}
void pa_maxb1(t_stack *stack,int medianb,int median)
{
    int s;
    s = 0;
    while (s <= medianb)
    {
        if(stack->b[s] == median)
        {
            while (stack->b[0] != median)
            {
                rb(stack);
            }
            pa(stack);
        }
        s++;
    }
     printf("fine maxb1 : \n");
}
void pa_maxb2(t_stack *stack, int medianb, int median)
{
    int s;
    s = stack->lb;
    while (s >= medianb)
    {
        if(stack->b[s] == median)
        {
            while (stack->b[0] != median)
            {
                rrb(stack);
            }
            pa(stack);
        }
        s--;
    }
     printf("fine maxb2 : \n");
}

void vordermaxmin(t_stack *stack, int medianb, int median)
{
    int s;
    s = 0;
    medianb = stack->lb / 2;
    while (s <= medianb)
    {
        if(stack->b[s] == median)
        {
            while (stack->b[0] != median)
            {
                rb(stack);
            }
            pa(stack);
        }
        s++;
    }
}
void putadjacent(t_stack *stack, int len)
{
    int s;
    s = 1;
    len = len / 2 - 1;
    while(stack->lb != 0)
    {
        if (stack->b[0] == stack->c[len])
        {
            pa(stack);
            //printf("stack c di 0 è nel prima del pa: %d\n", porcoddue);
            len--;
            //printf("stack c di 0 è nel primo if: %d\n", porcoddue);
            printf("len è nell if: %d\n", len);
        }
        else if (stack->b[0] == stack->c[s])
        {
            pa(stack);
            ra(stack);
            s++;
            printf("stack c di 0 è nel secondo if: %d\n", stack->c[0]);
        }
        else
        {
            rb(stack);
            printf("stack c di 0 è nell'else: %d\n", stack->c[0]);
        }
        printf("stack c di 0 è fuori dai controlli: %d\n", stack->c[0]);
        printf("len è nell if: %d\n", len);
    }
}
void sortmaxmin(t_stack *stack, int len, int median)    
{
    int s;
    s = 0;
    len = len / 2;
    while (stack->a[0] != median)
    {
        ra(stack);
    }
    ra(stack);
    while(stack->a[0] != stack->c[s])
    {
        pb(stack);
    }
}
void sortmaxmin2(t_stack *stack)    
{
    // printf("stack c di 0 è: %d\n", stack->c[0]);
    printf("stack a di 0 è: %d\n", stack->a[0]);
    while (stack->a[0] != stack->c[0])
    {
        ra(stack);
    }
}
void putadjacent2(t_stack *stack, int len, int median)
{
    int s;
    s = median + 2;
    len = len - 2;
    printf("len è: %d\n", len);
    printf("median è: %d\n", median);
    // sleep(5);
    while(stack->lb != 0)
    {
        printf("len è: %d\n", len);
        printf("median è: %d\n", median);
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
            rb(stack);
        }
    }
}
