/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 05:23:47 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 21:16:31 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define ERROR -1
# define HEX 16
# define LOWER_X 'x'
# define UPPER_X 'X'
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
char	*ft_utoa_decimal(unsigned long nb);
char	*ft_utoa_hex(unsigned long nb, int conversion);
int		ft_print_char(int c);
int		ft_print_str(char *s);
int		ft_print_int(int n);
int		ft_print_uint(unsigned int n);
int		ft_print_hex(unsigned long n, char conversion);
int		ft_print_ptr(void *ptr);

#endif
