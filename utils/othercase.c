/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/06/09 13:04:15 by ldi-masc         ###   ########.fr       */
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
                swap(&stack->c[i], &stack->c[j]);
            j++;
        }
        i++;
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
//     vordermaxmin(stack, medianb, median);
// printf("inizio putadjacent : \n");
    //  sleep(5);
     putadjacent(stack, len);
    //  printf("fine putadjacent : \n");
    //  m = 0;
    // while(m < len)
	// {
    //     printf("  %d", stack->c[m]);
    //     m++;
    // }
// //     printf("inizio sortmax min dopo c di 0 che sminchia");
    // printf("\n stack prima di sort maxmin è : \n");
     sortmaxmin(stack, len, median);
    // printf("inizia parte nuova\n");
// //     // printf("medianb %d\n", medianb);
// //     // printf("mhanz %d\n", mhanz);
//     printf("medianb prima di entrare in minb1 nuovo è %d\n", medianb);
//     printf("mediana prima di entrare in minb2 nuovo è %d\n", median);
//     printf("mediana prima di entrare in mhanz nuovo è %d\n", mhanz);
//     printf ("inizio minb1 nuovo\n");
    pa_minb1(stack, medianb, mhanz);
    // printf("fine minb1\n");
//     printf("inizio minb2 nuovo");
    pa_minb2(stack, medianb, mhanz);
    // printf("fine minb2\n");
    medianb = find_maxb(stack);
    // printf("il più grande della stack b è : %d\n", medianb);
//     la = la * 2;
//     printf("la è:%d\n", la);
//     //sleep(3);
//     if (la % 2 == 0)
//     {
//         median = stack->c[la - 1];
//     }
//     else
//     {
//         median = stack->c[la];
//     }
//     median = stack->c[la * 2 - 1];
//     medianb = stack->lb / 2;
//     printf("medianb prima di entrare in maxb1 nuovo è %d\n", medianb);
//     printf("mediana prima di entrare in maxb1 nuovo è %d\n", median);
//     printf("inizio maxb1 nuovo\n");
//     pa_maxb1(stack, medianb, median);
//     printf("fine maxb1\n");
//     printf("inizio maxb2 nuovo\n");
//     pa_maxb2(stack, medianb, median);
//     printf("fine maxb2\n");
// // //     // printf("inizio vordermaxmin\n");
// //     // vordermaxmin(stack, medianb, median);
// // //     // printf("fine vordermaxmin\n");
// // //     printf("inizio putadjacent nuovo\n");
    putadjacent2(stack, len);
// // //     printf("fine putadjacent\n");
// // //     printf("inizio sortmaxmin2\n");
    sortmaxmin2(stack, medianb);
// //     printf("fine sortmaxmin\n");
// //     // printf("median è:%d\n", median);
    
// // //     printf("fine parte nuova");
    // free(stack->c);
}
