/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/05 10:44:15 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_into_a(char **argv, int *a, size_t len)
{
	size_t		i;
	size_t		j;
	long int	n;

	i = 0;
	j = 1;
	n = 0;
	while (i < len)
	{
		n = (long int)ft_atoi(argv[j]);
		a[i] = n;
		i++;
		j++;
	}
}
ciao
// void	sort(int *a, int *b, size_t *la, size_t *lb)
// {
// 	if (*la == 2)
// 		threecase()
// }

int	main(int argc, char **argv)
{
	// int		*a;
	// int		*b;
	// size_t	la;
	// size_t	lb;

	// la = argc - 1;
	// lb = 0;
	if (argc < 2)
		exit(1);
	ft_errors(argc, argv);
	if (argc == 2)
		check
	// a = (int *) malloc(la * sizeof(int));
	// b = (int *) malloc(lb * sizeof(int));
	// insert_into_a(argv, a, la);
	// sort(a, b, &la, &lb);
	if (argc == 4)
	{
		threecase(argv);
	}
	else if (argc == 6)
		fivecase(a, b, argv);
	else
		printf("AO calma\n");
	// free(a);
	// free(b);
}
