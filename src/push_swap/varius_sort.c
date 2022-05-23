/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:00:25 by kzak              #+#    #+#             */
/*   Updated: 2022/05/23 11:18:47 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	freearray(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
}

static void	freelist(t_push_swap *data)
{
	stack_clear(&data->a);
	stack_clear(&data->b);
}

static	void	insert2(char **av, int n, t_stack *stack)
{
	size_t	i;

	i = 0;
	while (i < stack->la)
	{
		n = ft_atoi(av[i]);
		stack->a[i] = n;
		i++;
	}
}

static void	insert_into_a(int ac, char **argv, t_stack *stack)
{
	size_t		i;
	size_t		j;
	int			n;

	i = 0;
	j = 1;
	n = 0;
	stack->a = (int *) malloc(stack->la * sizeof(int));
	stack->b = (int *) malloc(stack->la * sizeof(int));
	if (ac > 2)
	{
		while (i < stack->la)
		{
			n = ft_atoi(argv[j]);
			stack->a[i] = n;
			i++;
			j++;
		}
	}
	if (ac == 2)
	{
		insert2(ft_split(argv[1], ' '), n, stack);
	}
}

void	varius_sort(t_stack *stack, t_push_swap *data, int argc, char **argv)
{
	int		n;

	n = stack->la;
	ft_memset(data, 0, sizeof(data));
	if (stack->la == 3)
	{
		insert_into_a(argc, argv, stack);
		is_sort(stack);
		sort(stack);
		freearray(stack);
	}
	else if (stack->la == 5)
	{
		insert_into_a(argc, argv, stack);
		is_sort(stack);
		fivecase(stack);
		freearray(stack);
	}
	else
	{
		data->a = create_stack_with_arg(argc, argv);
		data->b = NULL;
		sort_a(data, n);
		freelist(data);
	}
}
