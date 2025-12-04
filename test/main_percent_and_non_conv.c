/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_percent_and_non_conv.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:23:14 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 21:12:56 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	//int	p__num;
	int	ft_num;

	printf("\n[error]\n");
	ft_num = ft_printf("%i %s %z\n", 3, "str", 4);
	//p__num = printf("%i %s %z", 3, "str", 4);

	printf("%d\n", ft_num);
	//printf("%d\n", p__num);
	return (0);
}
