/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:14:59 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 14:08:49 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap2.h"

static void	type_a(t_push_swap *data)
{
	if (data->b->content > data->b->next->next->content)
	{
		operator("pa", data);
		operator("sb", data);
		operator("pa", data);
		return (operator("pa", data));
	}
	operator("pa", data);
	operator("sb", data);
	operator("pa", data);
	operator("sa", data);
	operator("pa", data);
}

static void	type_b(t_push_swap *data)
{
	operator("pa", data);
	operator("ra", data);
	operator("sb", data);
	operator("pa", data);
	operator("pa", data);
	operator("rra", data);
}

static void	type_c(t_push_swap *data)
{
	operator("sb", data);
	operator("pa", data);
	operator("pa", data);
	operator("pa", data);
}

static void	type_d(t_push_swap *data)
{
	operator("pa", data);
	operator("ra", data);
	operator("pa", data);
	operator("pa", data);
	operator("rra", data);
}

void	sort_three_b(t_push_swap *data)
{
	if (check_sort_n(data->b, DESC, 3))
	{
		operator("pa", data);
		operator("pa", data);
		return (operator("pa", data));
	}
	if (data->b->content > data->b->next->content && \
		data->b->next->content < data->b->next->next->content)
		return (type_a(data));
	if (data->b->content < data->b->next->content && \
		data->b->next->content < data->b->next->next->content)
		return (type_b(data));
	if (data->b->content < data->b->next->content && \
		data->b->next->content > data->b->next->next->content)
	{
		if (data->b->content > data->b->next->next->content)
			return (type_c(data));
		return (type_d(data));
	}
}
