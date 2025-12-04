/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_convert_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:28:25 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 18:00:31 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nb_base(unsigned long nb, size_t base);
static char	*digit_maker_decimal(char *s_nb, unsigned long nb, size_t len);
static char	*digit_maker_hex(char *s_nb, unsigned long nb, size_t len,
				size_t is_upper);

char	*ft_utoa_decimal(unsigned long nb)
{
	char	*s_nb;
	size_t	len;

	if (nb == 0)
		return (ft_strdup("0"));
	else
	{
		len = len_nb_base(nb, 10);
		s_nb = malloc(len + 1);
		if (s_nb == NULL)
			return (NULL);
		return (digit_maker_decimal(s_nb, nb, len));
	}
}

char	*ft_utoa_hex(unsigned long nb, int conversion)
{
	char	*s_nb;
	size_t	len;

	if (nb == 0)
		return (ft_strdup("0"));
	else
	{
		len = len_nb_base(nb, 16);
		s_nb = malloc(len + 1);
		if (s_nb == NULL)
			return (NULL);
		if (conversion == 1)
			return (digit_maker_hex(s_nb, nb, len, 1));
		else
			return (digit_maker_hex(s_nb, nb, len, 0));
	}
}

static int	len_nb_base(unsigned long nb, size_t base)
{
	size_t	len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / base;
		len++;
	}
	return (len);
}

static char	*digit_maker_decimal(char *s_nb, unsigned long nb, size_t len)
{
	s_nb[len] = '\0';
	while (len > 0)
	{
		s_nb[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (s_nb);
}

static char	*digit_maker_hex(char *s_nb, unsigned long nb, size_t len,
		size_t is_upper)
{
	s_nb[len] = '\0';
	while (len > 0)
	{
		if (nb % 16 >= 10)
		{
			if (is_upper)
				s_nb[len - 1] = (nb % 16) - 10 + 'A';
			else
				s_nb[len - 1] = (nb % 16) - 10 + 'a';
		}
		else
			s_nb[len - 1] = (nb % 16) + '0';
		nb = nb / 16;
		len--;
	}
	return (s_nb);
}
