/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_instuction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:13:04 by kzak              #+#    #+#             */
/*   Updated: 2022/05/30 11:01:56 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	switch_instruction(char *instruction, t_push_swap *data)
{
	if (!ft_strcmp(instruction, "pa") || \
		!ft_strcmp(instruction, "pb") || \
		!ft_strcmp(instruction, "sa") || \
		!ft_strcmp(instruction, "sb") || \
		!ft_strcmp(instruction, "ss") || \
		!ft_strcmp(instruction, "ra") || \
		!ft_strcmp(instruction, "rb") || \
		!ft_strcmp(instruction, "rr") || \
		!ft_strcmp(instruction, "rra") || \
		!ft_strcmp(instruction, "rrb") || \
		!ft_strcmp(instruction, "rrr"))
	{
		operator(instruction, data);
		return (0);
	}
	return (1);
}

int	exec_instruction(t_list *instructions, t_push_swap *data)
{
	int		instruction_err;

	while (instructions)
	{
		instruction_err = switch_instruction(\
			instructions->content, data);
		if (instruction_err)
			return (0);
		instructions = instructions->next;
	}
	return (1);
}
