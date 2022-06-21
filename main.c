/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 10:22:11 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insert_into_a(int ac, char **av, t_stack *stack)
{
	int		i;
	int		j;
	int		n;
	char	**str;

	i = 1;
	n = 0;
	stack->a = (int *)malloc(8000 * sizeof(int));
	stack->b = (int *)malloc(8000 * sizeof(int));
	stack->c = (int *) malloc(6000000 * sizeof(int));
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			stack->a[n] = ft_atoi(str[j]);
			nocopy(stack, ft_atoi(str[j]));
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
	t_chunk chunk;
	
	if (argc < 3)
		exit(1);
	ft_errors(argc, argv);
	stack.la = arrayleng(argc, argv);
	stack.lb = 0;
	insert_into_a(argc, argv, &stack);
	if (stack.la == 3 || stack.la == 2)
		threecase(&stack);
	else if (stack.la == 5 || stack.la == 4)
		fivecase(&stack);
	else if (stack.la <= 100) 
		othercase(&stack);
	else
		fivehundredcase(&stack, &chunk);	
	// else
	// 	printf("AO calma\n");
	free(stack.a);
	free(stack.b);	
	free(stack.c);
}
