/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/05/18 11:35:26 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void othercase(t_stack *stack)
{
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
    int mhanz;
    int medianb;

    s = 0;
    l = 0;
    m = 0;
    k = 0;
    i = 0;
    j = 1;
    stack->c = malloc(sizeof(int) * stack->la);
    while (k < stack->la)
    {
        stack->c[k] = stack->a[k];
        k++;
    }
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
printf ("divisione finita\n");
mhanz = find_minb(stack);
medianb = stack->lb / 2;
s = 0;
while ((int)s < medianb)
{
    if(stack->b[s] == mhanz || stack->b[s] == median)
    {
        printf("mhanz e %d\n", mhanz);
        while (stack->b[0] != mhanz && stack->b[0] != median)
        {
            rb(stack);
        }
        pa(stack);
        printf("Bellaa\n");
        ra(stack);
    }
    s++;
}
s = stack->lb;
while ((int)s > medianb)
{
    if(stack->b[s] == mhanz || stack->b[s] == median)
    {
        printf("mhanz e %d\n", mhanz);
        while (stack->b[0] != mhanz && stack->b[0] != median)
        {
            rrb(stack);
        }
        pa(stack);
         printf("Bellaa\n");
        ra(stack);
    }
    s--;
}

printf("il minimo della stack b è %d\n", mhanz);

}