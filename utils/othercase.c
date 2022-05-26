/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   othercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:49 by ldi-masc          #+#    #+#             */
/*   Updated: 2022/05/26 16:26:03 by vbellucc         ###   ########.fr       */
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
    stack->c = malloc(sizeof(int) * (la * 2));
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
    median = stack->c[stack->la / 2 - 1];
    
    m = 0;
    while(m < (int)stack->la)
	{
        printf("  %d", stack->c[m]);
        m++;
    }
printf("\n");
printf("mediana è:%d\n", median);

t = 0;
printf("la è:%zu\n", stack->la);
s = 0;
len = stack->la;
while(s <= len)
{
    m = 0;
    while(m < len)
	{
        printf("  %d", stack->c[m]);
        m++;
    }
    if (stack->a[0] <= median)
        pb(stack);
    else
        ra(stack);
    s++;
}
printf ("divisione finita\n");
m = 0;
    while(m < len)
	{
        printf("  %d", stack->c[m]);
        m++;
    }
mhanz = find_minb(stack);
medianb = stack->lb / 2;
// printf("mediana è:%d\n", median);
// printf("medianb è: %d\n", medianb);
// s = 0;
//     while ((int)s <= medianb)
//     {
//         if(stack->b[s] == mhanz)
//         {
//             printf("mhanz e %d\n", mhanz);
//             while (stack->b[0] != mhanz)
//             {
//                 rb(stack);
//             }
//             pa(stack);
//             ra(stack);
//         }
//         s++;
//     }
//     s = stack->lb;
//     while ((int)s >= medianb)
//     {
//         if(stack->b[s] == mhanz)
//             {
//             printf("mhanz e %d\n", mhanz);
//             while (stack->b[0] != mhanz)
//             {
//                 rrb(stack);
//             }
//             pa(stack);
//             ra(stack);
//         }
//         s--;
//     }
//     medianb = stack->lb / 2;
//     s = 0;
//     while ((int)s <= medianb)
//     {
//         printf("median b è %d\n", medianb);
//         if(stack->b[s] == median)
//         {
//             printf("mhanz e %d\n", mhanz);
//             while (stack->b[0] != median)
//             {
//                 rb(stack);
//             }
//             pa(stack);
//             printf("Bellaa\n");
//         }
//         s++;
//     }
//     medianb = stack->lb / 2;
//     s = stack->lb;
//     while ((int)s >= medianb)
//     {
//         printf("entra %d\n", medianb);
//         if(stack->b[s] == median)
//             {
//             printf("mhanz e %d\n", mhanz);
//             while (stack->b[0] != median)
//             {
//                 rrb(stack);
//             }
//             pa(stack);
//             printf("Bellaa\n");
//         }
//         s--;
//     }
//     s = 1;
//     j = la - 1;
//     m = 0;
//     while(stack->lb != 0)
//     {
//         printf("stack c 1 è:%d", stack->c[1]);
//         printf("stack c di s è:%d", stack->c[s]);
//         //sleep(5);
//         if (stack->b[0] == stack->c[j])
//         {
//             pa(stack);
//             j--;
//         }
//         else if (stack->b[0] == stack->c[s])
//         {
//             printf("aaaaaaaaaa\n");
//             pa(stack);
//             ra(stack);
//             s++;
//         }
//         else
//         {
//             rb(stack);
//         }
//         //pushato alle 12:00==/
//    }
//     printf("stack a completa\n");
//     j = len / 2;
//     while (stack->a[0] != stack->c[j])
//     {
//         ra(stack);
//     }
//     ra(stack);
//     s = 0;
//     while(stack->a[0] != stack->c[s])
//     {
//         pb(stack);
//     }



    
    //  printf("medianb %d\n", medianb);
    // printf("mhanz %d\n", mhanz);
    // sort_c(stack);
    // push_to_b(stack);
    // print_c(stack);
    // find_median(stack);
    pa_minb1(stack, medianb, mhanz);
    pa_minb2(stack, medianb, mhanz);
    pa_maxb1(stack, medianb, median);
    pa_maxb2(stack, medianb, median);
//     vordermaxmin(stack, medianb, median);
    //  sleep(5);
     putadjacent(stack, len);
     sleep(5);
// //     printf("inizio sortmax min dopo c di 0 che sminchia");
    printf("stack prima di sort maxmin è : \n");
     sortmaxmin(stack, len);
// //     printf("inizia parte nuova\n");
//     mhanz = find_minb(stack);
//     medianb = stack->lb / 2 - 1;
// //     // printf("medianb %d\n", medianb);
// //     // printf("mhanz %d\n", mhanz);
//     printf("medianb prima di entrare in minb1 nuovo è %d\n", medianb);
//     printf("mediana prima di entrare in minb2 nuovo è %d\n", median);
//     printf("mediana prima di entrare in mhanz nuovo è %d\n", mhanz);
//     printf ("inizio minb1 nuovo\n");
//     pa_minb1(stack, medianb, mhanz);
//     printf("fine minb1\n");
//     printf("inizio minb2 nuovo");
//     pa_minb2(stack, medianb, mhanz);
//     printf("fine minb2\n");
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
//     putadjacent2(stack, len, median);
// // //     printf("fine putadjacent\n");
// // //     printf("inizio sortmaxmin2\n");
//     sortmaxmin2(stack);
// //     printf("fine sortmaxmin\n");
// //     // printf("median è:%d\n", median);
    
// // //     printf("fine parte nuova");
//     free(stack->c);
}
