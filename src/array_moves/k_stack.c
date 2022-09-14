/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:25:34 by kzak              #+#    #+#             */
/*   Updated: 2022/09/13 14:18:12 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h_file/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

static void	sort_k(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i != stack->la)
	{
		j = i + 1;
		while (j != stack->la)
		{
			if (stack->k[i] > stack->k[j])
				ft_swap(&stack->k[i], &stack->k[j]);
			j++;
		}
		i++;
	}
}

void	insert_into_k(int ac, char **av, t_stack *stack)
{
	int		i;
	int		j;
	int		n;
	char	**str;

	i = 1;
	n = 0;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			stack->k[n] = ft_atoi(str[j]);
			j++;
			n++;
		}
		i++;
		free_str(str);
	}
	sort_k(stack);
}
