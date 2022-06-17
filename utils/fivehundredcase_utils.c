/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundredcase_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:07:05 by vbellucc          #+#    #+#             */
/*   Updated: 2022/06/17 12:30:03 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void chunk_division(t_stack *stack, t_chunk *chunk)
{
    if(stack->la <= 200)
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int)); 
    }
    else if(stack->la <= 300)
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int));
        chunk->c = (int *) malloc(6000000 * sizeof(int));
    }
    else if(stack->la <= 400)
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int));
        chunk->c = (int *) malloc(6000000 * sizeof(int));
        chunk->d = (int *) malloc(6000000 * sizeof(int));
    }
    else
    {
        chunk->a = (int *) malloc(6000000 * sizeof(int));
        chunk->b = (int *) malloc(6000000 * sizeof(int));
        chunk->c = (int *) malloc(6000000 * sizeof(int));
        chunk->d = (int *) malloc(6000000 * sizeof(int));
        chunk->e = (int *) malloc(6000000 * sizeof(int));
    }
}

