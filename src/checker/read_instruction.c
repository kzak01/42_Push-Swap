/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:22:16 by kzak              #+#    #+#             */
/*   Updated: 2022/05/30 11:02:11 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	put_error_with_clear(t_list *result, char *instruction)
{
	if (instruction)
		free(instruction);
	ft_lstclear(&result, free);
	ft_putendl_fd("Error", 2);
	exit(1);
}

t_list	*read_instruction(void)
{
	int		gnl_status;
	char	*instruction;
	t_list	*instructions;
	t_list	*tmp;

	instructions = NULL;
	gnl_status = get_next_line(0, &instruction);
	while (gnl_status > 0)
	{
		tmp = ft_lstnew(instruction);
		if (tmp == NULL)
			put_error_with_clear(instructions, instruction);
		ft_lstadd_back(&instructions, tmp);
		gnl_status = get_next_line(0, &instruction);
	}
	if (ft_strlen(instruction) || gnl_status == -1)
		put_error_with_clear(instructions, NULL);
	free(instruction);
	return (instructions);
}
