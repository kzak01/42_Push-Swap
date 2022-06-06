/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:52:10 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 14:15:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_push_swap *stack)
{
	int	temp;

	// ft_printf("sa\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	temp = stack->a->content;
	stack->a->content = stack->a->next->content;
	stack->a->next->content = temp;
	ft_printf("sa\n");
}

void	sb(t_push_swap *stack)
{
	int	temp;

	// ft_printf("sb\n");
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	temp = stack->b->content;
	stack->b->content = stack->b->next->content;
	stack->b->next->content = temp;
	ft_printf("sb\n");
}

void	ss(t_push_swap *stack)
{
	int	temp;

	ft_printf("ss\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	temp = stack->a->content;
	stack->a->content = stack->a->next->content;
	stack->a->next->content = temp;
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	temp = stack->b->content;
	stack->b->content = stack->b->next->content;
	stack->b->next->content = temp;
	// ft_printf("ss\n");
}
