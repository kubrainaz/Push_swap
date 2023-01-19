/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:24:51 by kinaz             #+#    #+#             */
/*   Updated: 2023/01/03 20:24:52 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "./ft_printf/ft_printf.h"
# include "./gnl/get_next_line.h"

typedef struct s_data
{
	int		*array;
	int		size;
	char	type;
}	t_data;

void	swap(t_data *data, int control);
void	rotate(t_data *data, int control);
void	rev_rotate(t_data *data, int control);
void	push(t_data *data1, t_data *data2, int control);
void	sort_the_list(t_data *a, t_data *b);
void	indexing(t_data *a);
void	rotate_together(t_data *a, t_data *b, int control);
void	rev_rotate_together(t_data *a, t_data *b, int control);
void	swap_together(t_data *a, t_data *b, int control);
void	sort_smaller_list(t_data *a, t_data *b);
void	error_mes(t_data *a, t_data *b);
void	free_function(t_data *a, t_data *b);
void	send_b(t_data *a, t_data *b);
void	find_sort_path(t_data *a, t_data *b, int *i_a, int *i_b);
void	check_double(t_data *a, t_data *b);
void	check_listed(t_data *a, t_data *b);
void	reading(char **av, t_data *a, t_data *b);
void	check_listed_for_checker(t_data *a, t_data *b, int *control);
void	duplicate(t_data *a, t_data *b);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, int start, int len);
char	*ft_strdup(const char *s1);
int		ft_atoii(char *s, t_data *a, t_data *b);
char	*ft_strjoinn(char const *s1, char const *s2);
#endif
