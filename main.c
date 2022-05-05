/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/05 11:49:46 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	insert_into_a(char **argv, int *a, size_t len)
// {
// 	size_t		i;
// 	size_t		j;
// 	long int	n;

// 	i = 0;
// 	j = 1;
// 	n = 0;
// 	while (i < len)
// 	{
// 		n = (long int)ft_atoi(argv[j]);
// 		a[i] = n;
// 		i++;
// 		j++;
// 	}
// }

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
	int		*a;
	int		*b;
	size_t	la;
	size_t	lb;
	
	if (argc < 2)
		exit(1);
	ft_errors(argc, argv);
	la = arrayleng(argc, argv);
	printf("ciao %zu\n", la);
	lb = 0;
	a = (int *) malloc(la * sizeof(int));
	b = (int *) malloc(lb * sizeof(int));
	// insert_into_a(argv, a, la);
	// sort(a, b, &la, &lb);
	if (argc == 4)
	{
		threecase(argv);
	}
	// else if (argc == 6)
	// 	fivecase(a, b, argv);
	else
		printf("AO calma\n");
	free(a);
	free(b);
}
