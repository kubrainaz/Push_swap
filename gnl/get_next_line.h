/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:21:29 by kinaz             #+#    #+#             */
/*   Updated: 2023/01/03 20:21:31 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
char	*ft_get_str(int fd, char *str);

int		ft_strchr(char *str, int c);
int		ft_strlenn(char *str);
char	*ft_strjoin(char *str, char *temp_str);
char	*ft_get_line(char *str);
char	*ft_get_new_str(char *str);

#endif
