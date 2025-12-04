/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 03:37:28 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 21:19:36 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	sum_print_len(const char *str, va_list arg);
static int	is_conversion(char c);
static int	print_arg(char c, va_list arg);

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		total_len;

	if (!str)
		return (ERROR);
	va_start (arg, str);
	total_len = sum_print_len(str, arg);
	if (total_len < 0)
		return (ERROR);
	va_end (arg);
	return (total_len);
}

static int	sum_print_len(const char *str, va_list arg)
{
	int		sum;
	size_t	i;
	int		diff;

	sum = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (is_conversion(str[i + 1]))
				diff = print_arg(str[++i], arg);
			else
				return (ERROR);
		}
		else
			diff = ft_print_char(str[i]);
		if (diff < 0)
			return (ERROR);
		sum += diff;
		i++;
	}
	return (sum);
}

static int	print_arg(char c, va_list arg)
{
	if (c == '%')
		return (ft_print_char(c));
	else if (c == 'c')
		return (ft_print_char(va_arg(arg, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(arg, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_print_uint(va_arg(arg, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(arg, unsigned int), c));
	return (ERROR);
}

static int	is_conversion(char c)
{
	char	*conversions;
	size_t	i;

	conversions = "cspdiuxX%";
	i = 0;
	while (conversions[i])
	{
		if (conversions[i] == c)
			return (1);
		i++;
	}
	return (0);
}
