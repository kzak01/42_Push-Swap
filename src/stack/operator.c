/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:55:32 by kzak              #+#    #+#             */
/*   Updated: 2022/05/23 11:22:30 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	operator(char *op, t_push_swap *data)
{
	if (!ft_strcmp(op, "ra") || !ft_strcmp(op, "rr"))
		rotate(&data->a);
	if (!ft_strcmp(op, "rb") || !ft_strcmp(op, "rr"))
		rotate(&data->b);
	if (!ft_strcmp(op, "rra") || !ft_strcmp(op, "rrr"))
		rrotate(&data->a);
	if (!ft_strcmp(op, "rrb") || !ft_strcmp(op, "rrr"))
		rrotate(&data->b);
	if (!ft_strcmp(op, "pa"))
		push(&data->b, &data->a);
	if (!ft_strcmp(op, "pb"))
		push(&data->a, &data->b);
	if (!ft_strcmp(op, "sa") || !ft_strcmp(op, "ss"))
		swap(data->a);
	if (!ft_strcmp(op, "sb") || !ft_strcmp(op, "ss"))
		swap(data->b);
	if (data->visualizer == VISUAL)
	{
		system("clear");
		print_stacks(data->a, data->b);
		usleep(VISUAL_SPEED);
	}
	if (data->visualizer == OP)
		ft_putendl_fd(op, 1);
	// print_stacks(data->a, data->b);
}
