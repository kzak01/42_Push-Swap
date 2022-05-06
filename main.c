/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/06 10:59:49 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_into_a(char **argv, t_stack stack)
{
	size_t		i;
	size_t		j;
	long int	n;

	i = 0;
	j = 1;
	n = 0;
	while (i < stack.la)
	{
		n = (long int)ft_atoi(argv[j]);
		stack.a[i] = n;
		i++;
		j++;
	}
}

// void	sort(int *a, int *b, size_t *la, size_t *lb)
// {
// 	if (*la == 2)
// 		threecase()
// }

static int	arrayleng(int ac, char **av)
{
	int		i;
	int		j;
	char	**str;
	
	i = 1;
	j = 0;
	if (ac > 2)
	{
		while (av[i])
		{
			j++;
			i++;
		}
		return (j);
	}
	if (ac == 2)
	{
		i = 1;
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
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	
	if (argc < 2)
		exit(1);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	printf("ciao %zu\n", stack.la);
	stack.lb = 0;
	stack.a = (int *) malloc(stack.la * sizeof(int));
	stack.b = (int *) malloc(stack.lb * sizeof(int));
	insert_into_a(argv, stack);
	// sort(a, b, &la, &lb);
	if (stack.la == 3)
	{
		threecase(stack);
	}
	else if (stack.la == 5)
		fivecase(stack, argv);
	else
		printf("AO calma\n");
	free(stack.a);
	free(stack.b);
}
