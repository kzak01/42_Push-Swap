/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:51:37 by vbellucc          #+#    #+#             */
/*   Updated: 2022/05/24 12:13:30 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa_minb1(t_stack *stack,int medianb,int mhanz)
{
    int s;
    s = 0;
    while ((int)s <= medianb)
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
}
void pa_minb2(t_stack *stack,int medianb,int mhanz)
{
    int s;
    s = stack->lb;
    while ((int)s >= medianb)
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
}
void pa_maxb1(t_stack *stack,int medianb,int median)
{
    int s;
    s = 0;
    while ((int)s <= medianb)
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
void pa_maxb2(t_stack *stack, int medianb, int median)
{
    int s;
    s = stack->lb;
    medianb = stack->lb / 2;
    while ((int)s >= medianb)
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
}

void vordermaxmin(t_stack *stack, int medianb, int median)
{
    int s;
    s = 0;
    medianb = stack->lb / 2;
    while ((int)s <= medianb)
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
void sortmaxmin(t_stack *stack, int len)    
{
    int s;
    len = len / 2;
    while (stack->a[0] != stack->c[len])
    {
        ra(stack);
    }
    ra(stack);
    s = 0;
    while(stack->a[0] != stack->c[s])
    {
        pb(stack);
    }
}