/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 14:55:00 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap2.h"
#include "stack.h"

int	main(int argc, char **argv)
{
	t_push_swap	stack;

	if (argc < 2)
		return (0);
	ft_memset(&stack, 0, sizeof(stack));
	// ft_errors(argc, argv);
	stack.a = create_stack_with_arg(argc, argv);
	stack.b = NULL;
	varius_sort(&stack);
	stack_clear(&stack.a);
	stack_clear(&stack.b);
	return (0);
}
