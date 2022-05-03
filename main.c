/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:12:56 by kzak              #+#    #+#             */
/*   Updated: 2022/05/03 10:36:28 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	a[5];
	int	b[5];
	int	i;
	int	j;
	if (argc == 6)
		write(1, "va tutto bene\n\n", 15);
	// ft_errors(argv);
	// if (argc == 4)
	// {
	// 	threecase(argv);
	// }
	// else if (argc == 6)
	// 	fivecase(argv);
	// else 
	// 	printf("AO calma\n");
	i = 0;
	j = 1;
	while (i < 3)
	{
		a[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	i = 0;
	j = 1;
		while (i < 5)
	{
		b[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	printf("array a: %d %d %d %d %d\n\n", a[0], a[1], a[2], a[3], a[4]);
	printf("array b: %d %d %d %d %d\n\n", b[0], b[1], b[2], b[3], b[4]);
	pa (a, b);
	printf("array a: %d %d %d %d %d\n\n", a[0], a[1], a[2], a[3], a[4]);
	printf("array b: %d %d %d %d %d\n\n", b[0], b[1], b[2], b[3], b[4]);
	pa (a, b);
	printf("array a: %d %d %d %d %d\n\n", a[0], a[1], a[2], a[3], a[4]);
	printf("array b: %d %d %d %d %d\n\n", b[0], b[1], b[2], b[3], b[4]);
}