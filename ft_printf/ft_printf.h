/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:19:43 by kinaz             #+#    #+#             */
/*   Updated: 2023/01/03 20:19:45 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BASE
#  define BASE "0123456789abcdef"
# endif

# ifndef BASEV2
#  define BASEV2 "0123456789ABCDEF"
# endif

void	ft_putchar(char c, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putnbr(long double nbr, int base, int *count);
void	ft_section_part(va_list lst, const char str, int *count);
int		ft_printf(const char *str, ...);

#endif
