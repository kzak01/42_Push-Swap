/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:58:01 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 15:10:09 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP2_H
# define PUSH_SWAP2_H

# include "libft.h"
# include "stack.h"
# include "push_swap.h"

# define PUSH_CNT	0
# define RA_CNT		1
# define RB_CNT		2

# define DESC		0
# define ASC		1

# define SMALL		0
# define BIG		1

//get pivot
void	get_pivot(int pivot[], t_stack2 *stack, int n);

//sort_3_a
void	sort_three_a(t_push_swap *data);

//sort_3_b
void	sort_three_b(t_push_swap *data);

//sort_a
void	sort_a(t_push_swap *data, int size);

//sort_b
void	sort_b(t_push_swap *data, int size);

//sort_n
int		check_sort_n(t_stack2 *stack, int type, int n);

#endif
