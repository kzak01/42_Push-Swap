/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/06/28 12:16:36 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insert_into_a(int ac, char **av, t_stack *stack)
{
	int		i;
	int		j;
	int		n;
	char	**str;
	int		z;

	i = 1;
	n = 0;
	z = 0;
	stack->a = (int *)malloc(stack->la * sizeof(int));
	stack->b = (int *)malloc(stack->la * sizeof(int));
	stack->k = (int *)malloc(stack->la * sizeof(int));
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			stack->a[n] = ft_atoi(str[j]);
			z++;
			nocopy(stack, ft_atoi(str[j]), z);
			j++;
			n++;
		}
		i++;
		free_str(str);
	}
}

static int	arrayleng(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;
	int		temp;

	i = 1;
	temp = 0;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			temp++;
			j++;
		}
		i++;
		free_str(str);
	}
	return (temp);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc < 2)
		exit(1);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	stack.lb = 0;
	stack.lk = arrayleng(argc, argv);
	stack.b = NULL;
	insert_into_a(argc, argv, &stack);
	insert_into_k(argc, argv, &stack);
	varius_sort(&stack);
	free(stack.a);
	free(stack.b);
	free(stack.k);
}
