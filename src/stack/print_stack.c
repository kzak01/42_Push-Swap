/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:19:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/30 11:19:58 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static t_stack	*print_stack_a(t_stack *stack_a)
{
	int		i;
	char	*tmp;

	tmp = ft_itoa(stack_a->content);
	i = 20 - ft_strlen(tmp);
	while (i--)
		ft_putchar_fd(' ', 1);
	ft_putstr_fd(tmp, 1);
	free(tmp);
	stack_a = stack_a->next;
	return (stack_a);
}

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_putendl_fd("             STACK_A : STACK_B", 1);
	while (stack_a || stack_b)
	{
		if (stack_a)
			stack_a = print_stack_a(stack_a);
		else
			ft_putstr_fd("                    ", 1);
		ft_putstr_fd(" : ", 1);
		if (stack_b)
		{
			ft_putnbr_fd(stack_b->content, 1);
			stack_b = stack_b->next;
		}
		ft_putchar_fd('\n', 1);
	}
}
