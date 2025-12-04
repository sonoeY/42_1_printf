/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_print_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:05:41 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 19:04:27 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	char		*num;
	size_t		i;
	int			temp;
	int			print_total;

	i = 0;
	temp = 0;
	print_total = 0;
	num = ft_itoa(n);
	while (num[i])
	{
		temp = ft_print_char(num[i]);
		if (temp < 0)
		{
			free(num);
			return (ERROR);
		}
		print_total += temp;
		i++;
	}
	free(num);
	return (print_total);
}

int	ft_print_uint(unsigned int n)
{
	char	*num;
	size_t	i;
	int		temp;
	int		print_total;

	i = 0;
	temp = 0;
	print_total = 0;
	num = ft_utoa_decimal(n);
	while (num[i])
	{
		temp = ft_print_char(num[i]);
		if (temp < 0)
		{
			free(num);
			return (ERROR);
		}
		print_total += temp;
		i++;
	}
	free(num);
	return (print_total);
}

int	ft_print_hex(unsigned long n, char is_upper)
{
	char		*num;
	size_t		i;
	int			temp;
	int			print_total;

	i = 0;
	temp = 0;
	print_total = 0;
	if (is_upper == UPPER_X)
		num = ft_utoa_hex(n, 1);
	else
		num = ft_utoa_hex(n, 0);
	while (num[i])
	{
		temp = ft_print_char(num[i]);
		if (temp < 0)
		{
			free(num);
			return (ERROR);
		}
		print_total += temp;
		i++;
	}
	free(num);
	return (print_total);
}

int	ft_print_ptr(void *ptr)
{
	int	print_total;
	int	temp;

	print_total = 0;
	temp = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	temp = ft_print_str("0x");
	if (temp < 0)
		return (ERROR);
	print_total += temp;
	temp = ft_print_hex((unsigned long)ptr, LOWER_X);
	if (temp < 0)
		return (ERROR);
	print_total += temp;
	return (print_total);
}
