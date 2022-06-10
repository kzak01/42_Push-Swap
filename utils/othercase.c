/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/10 15:12:20 by ldi-masc         ###   ########.fr       */
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
    // stack->c = (int*) malloc(stack->la * sizeof(int));
    // while (k < stack->la)
    // {
    //     stack->c[k] = stack->a[k];
    //     k++;
    // }
    // i = 0;
    // while (i < stack->la)
    // {
    // min = stack->c[i];
    // min_index = i;
    //     j = i + 1;
    //     while(j < stack->la)
    //     {
    //        if(stack->c[j] < min)
    //        {
    //         min = stack->c[j];
    //         min_index = j;
    //        }
    //        j++;
    //     }
    //     t = min;
    //     stack->c[min_index] = stack->c[i];
    //     stack->c[i] = t;
    //     i++;
    // }
    median = stack->c[stack->la / 2];
    
    // m = 0;
    // while(m < (int)stack->la)
	// {
    //     printf("  %d", stack->c[m]);
    //     m++;
    // }
// printf("\n");
// printf("mediana è:%d\n", median);

t = 0;
// printf("la è:%zu\n", stack->la);
s = 0;
len = stack->la;
while(s < len)
{
    // m = 0;
    // while(m < len)
	// {
    //     printf("  %d", stack->c[m]);
    //     m++;
    // }
    if (stack->a[0] <= median)
        pb(stack);
    else
        ra(stack);
    s++;
}
// printf ("divisione finita\n");
// m = 0;
//     while(m < len)
// 	{
//         printf("  %d", stack->c[m]);
//         m++;
//     }
mhanz = find_minb(stack);
medianb = stack->lb / 2;
    pa_minb1(stack, medianb, mhanz);
    pa_minb2(stack, medianb, mhanz);
    pa_maxb1(stack, medianb, median);
    pa_maxb2(stack, medianb, median);

    putadjacent(stack, len);
    //  printf("fine putadjacent : \n");
    //  m = 0;
    // while(m < len)
	// {
    //     printf("  %d", stack->c[m]);
    //     m++;
    // }
    sortmaxmin(stack, len, median);
    pa_minb1(stack, medianb, mhanz);
    pa_minb2(stack, medianb, mhanz);
    medianb = find_maxb(stack);
    putadjacent2(stack, len);
    sortmaxmin2(stack, medianb);
}
