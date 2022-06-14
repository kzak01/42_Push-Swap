/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/06/14 11:33:26 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int	count1(char **av, int i, int j)
{
	i = 1;
	j = 0;
	while (av[i])
	{
		j++;
		i++;
	}
	return (j);
}

static int	arrayleng(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	j = 0;
	if (ac > 2)
		j = count1(av, i, j);
	if (ac == 2)
	{
		while (i < ac)
		{
			str = ft_split(av[i], ' ');
			j = 0;
			while (str && str[j])
				j++;
			i++;
		}
		return (j);
	}
	return (j);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc < 3)
		exit(1);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	stack.lb = 0;
	stack.a = (int *) malloc(6000000 * sizeof(int));
	stack.b = (int *) malloc(6000000 * sizeof(int));
	stack.c = (int *) malloc(6000000 * sizeof(int));
	insert_into_a(argc, argv, &stack);
	if (stack.la == 3 || stack.la == 2)
		threecase(&stack);
	else if (stack.la == 5 || stack.la == 4)
		fivecase(&stack);
	else 
		othercase(&stack);
	// else
	// 	printf("AO calma\n");
	free(stack.a);
	free(stack.b);	
	free(stack.c);
}
