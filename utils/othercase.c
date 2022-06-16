/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/16 16:11:45 by ldi-masc         ###   ########.fr       */
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

void othercase(t_stack *stack)
{
    // int min_index;
    size_t j;
    size_t i;
    size_t k;
    // int min;
    int t;
    size_t l;
    int m;
    int median;
    int s;
    int mhanz;
    int medianb;
    int la;
    int len;

    s = 0;
    l = 0;
    m = 0;
    k = 0;
    i = 0;
    j = 1;
    t = 0;
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
    median = stack->c[stack->la / 2];    
    // m = 0;
    // while(m < (int)stack->la)
	// {
    //     printf("  %d", stack->c[m]);
    //     m++;
    // }
s = 0;
len = stack->la;
while(s < len)
{
    if (stack->a[0] <= median)
        pb(stack);
    else
        ra(stack);
    s++;
}
mhanz = find_minb(stack);
medianb = stack->lb / 2;
    pa_minb1(stack, medianb, mhanz);
    pa_minb2(stack, medianb, mhanz);
    pa_maxb1(stack, medianb, median);
    pa_maxb2(stack, medianb, median);
    putadjacent(stack, len);
    sortmaxmin(stack, len, median);
    mhanz = find_minb(stack);
    pa_minb1(stack, medianb, mhanz);
    pa_minb2(stack, medianb, mhanz);
    t = find_maxb(stack);
    pa_maxb1(stack, medianb, median);
    pa_maxb2(stack, medianb, median);
    putadjacent2(stack, len);
    sortmaxmin2(stack, t);
    // printarray(stack);
}
