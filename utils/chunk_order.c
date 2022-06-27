/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:35:48 by vbellucc          #+#    #+#             */
/*   Updated: 2022/06/23 14:06:51 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"


// static void swap(int *a, int *b)
// {
//     int c;
    
//     c = *a;
//     *a = *b;
//     *b = c;
// }


// void    chunk_order(int *chunk, int count)
// {
//     int j;
//     int i;
//     int k;
    
//     k = 0;
//     j = 1;
//     i = 0;
//     while (i < count - 1)
//     {
//         j = i + 1;
//         while (j < count)
//         {
//             if (chunk[i] > chunk[j])
//             {
//                 swap(&chunk[i], &chunk[j]);
//             }
//             j++;
//         }
//         i++;
//     }
// }