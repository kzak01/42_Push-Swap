/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:51:37 by vbellucc          #+#    #+#             */
/*   Updated: 2022/06/16 17:16:42 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Controlla la prima metà se è presente il numero più piccolo e se lo trova fa rb finchè non è alla posizione 0 e poi fa pa ed ra
void pa_minb1(t_stack *stack,int medianb,int mhanz)
{
    int s;
    s = 0;
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
            break;
        }
        s++;
    }
}

// Controlla la seconda metà se è presente il numero più piccolo e se lo trova fa rrb finchè non è alla posizione 0 e poi fa pa ed ra
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
            break;
        }
        s--;
    }   
}

// Controlla la prima metà se è presente il numero più grande e se lo trova fa rb finchè non è alla posizione 0 e poi fa pa ed ra
void pa_maxb1(t_stack *stack,int medianb,int median)
{
    int s;
    s = 0;
    //sleep(2);
    while (s <= medianb)
    {
        //printf("che succede");
        //sleep(2);
        if(stack->b[s] == median)
        {
            while (stack->b[0] != median)
            {
                rb(stack);
            }
            pa(stack);
            break;
        }
        s++;
    }
}

// Controlla la seconda metà se è presente il numero più grande e se lo trova fa rrb finchè non è alla posizione 0 e poi fa pa ed ra
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
            break;
        }
        s--;
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
void sortmaxmin2(t_stack *stack, int medianb)    
{
    while (stack->a[0] != medianb)
    {
        ra(stack);
    }
    ra(stack);
}
void putadjacent2(t_stack *stack, int len)
{
    int s;
    s = len - 1;
    len = len / 2 + 2;
    while(stack->lb != 0)
    {
        if (stack->b[0] == stack->c[len])
        {
            pa(stack);
            ra(stack);
            len++;
            
        }
        else if (stack->b[0] == stack->c[s])
        {
            pa(stack);
            s--;
        }
        else
        {
            rb(stack);
        }
    }
}
