/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/05/17 18:07:58 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void othercase(t_stack *stack)
{
    // int a2[stack->la];
    // size_t la2;
    int min_index;
    size_t j;
    size_t i;
    size_t k;
    int min;
    int t;
    size_t l;
    int m;
    int median;
    size_t s;

    s = 0;
    l = 0;
    m = 0;
    k = 0;
    i = 0;
    j = 1;
    //t = 0;
    // la2 = stack->la;
    stack->c = malloc(sizeof(int) * stack->la);
    while (k < stack->la)
    {
        // printf("ciao mannaggia la: %zu\n", stack->la);
        // fflush(stdout);
        stack->c[k] = stack->a[k];
        k++;
        // sleep(1);
    }
         
    //c = find_min2(a2, la2);
    i = 0;
    while (i < stack->la)
    {
        min = stack->c[i];
        min_index = i;
        j = i + 1;
        while(j < stack->la)
        {
           if(stack->c[j] < min)
           {
            min = stack->c[j];
            min_index = j;
           }
           j++;
        }
        t = min;
        stack->c[min_index] = stack->c[i];
        stack->c[i] = t;
        i++;
    }
    median = stack->c[stack->la / 2 ];
    
    m = 0;
    while(m < (int)stack->la)
	{
        printf("  %d", stack->c[m]);
        m++;
    }
printf("\n");
printf("mediana è:%d\n", median);

//t = 0;
printf("la è:%zu\n", stack->la);
s = 0;
int len = stack->la;
while((int)s <= len)
{
    //printf("%d\n", j);
    if (stack->a[0] <= median)
        pb(stack);
    else
        ra(stack);
    s++;
}
}