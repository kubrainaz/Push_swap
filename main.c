/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <kinaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:23:44 by kinaz             #+#    #+#             */
/*   Updated: 2023/01/07 17:17:47 by kinaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	a;
	t_data	b;

	a.type = 'a';
	b.type = 'b';
	if (ac >= 2)
		reading(av, &a, &b);
	else
		return (0);
	duplicate(&a, &b);
	indexing(&a);
	check_listed(&a, &b);
	if (a.size > 5)
		sort_the_list(&a, &b);
	else
		sort_smaller_list(&a, &b);
	free(a.array);
	free(b.array);
	return (0);
}
