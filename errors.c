/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <kinaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:23:08 by kinaz             #+#    #+#             */
/*   Updated: 2023/01/07 16:42:23 by kinaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_mes(t_data *a, t_data *b)
{
	write(2, "Error\n", 6);
	free(a->array);
	free(b->array);
	exit(1);
}

void	free_function(t_data *a, t_data *b)
{
	free(a->array);
	free(b->array);
	exit(1);
}

void	rev_rotate(t_data *data, int control)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = data->array[0];
	while (i < data->size -1)
	{
		data->array[i] = data->array[i + 1];
		i++;
	}
	data->array[data->size - 1] = tmp;
	if (control == 0)
	{
		if (data->type == 'a')
			ft_printf("rra\n");
		else if (data->type == 'b')
			ft_printf("rrb\n");
	}
}

void	rev_rotate_together(t_data *a, t_data *b, int control)
{
	if (control == 0)
	{
		rev_rotate(a, 1);
		rev_rotate(b, 1);
		ft_printf("rrr\n");
	}
}
