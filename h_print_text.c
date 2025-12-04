/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_print_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:39:55 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 22:31:46 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	unsigned char	unsign_c;

	unsign_c = (unsigned char)c;
	return (write (1, &unsign_c, 1));
}

int	ft_print_str(char *s)
{
	size_t	i;
	size_t	len;
	int		print_len;
	int		temp;

	i = 0;
	temp = 0;
	print_len = 0;
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	while (len - i > WRITE_BUFFER_MAX)
	{
		temp = write (1, &s[i], WRITE_BUFFER_MAX);
		i += WRITE_BUFFER_MAX;
		if (temp < 0)
			return (ERROR);
		print_len += temp;
	}
	temp = write (1, &s[i], (len - i));
	if (temp < 0)
		return (ERROR);
	print_len += temp;
	return (print_len);
}
