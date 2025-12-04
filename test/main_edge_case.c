/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_edge_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:24:14 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 18:47:51 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	void	*p_max = (void *)UINT_MAX;

	printf("\n[p]\n");
	printf (" p: %d\nft: %d\n", printf("%p\n", p_max), ft_printf("%p\n", p_max));

	printf("\n[d]\n");
	printf (" p: %d\nft: %d\n", printf("%d\n", INT_MAX), ft_printf("%d\n", INT_MAX));
	printf (" p: %d\nft: %d\n", printf("%d\n", INT_MIN), ft_printf("%d\n", INT_MIN));

	printf("\n[i]\n");
	printf (" p: %d\nft: %d\n", printf("%i\n", INT_MAX), ft_printf("%i\n", INT_MAX));
	printf (" p: %d\nft: %d\n", printf("%i\n", INT_MIN), ft_printf("%i\n", INT_MIN));

	printf("\n[u]\n");
	printf (" p: %d\nft: %d\n", printf("%u\n", UINT_MAX), ft_printf("%u\n", UINT_MAX));

	printf("\n[x]\n");
	printf (" p: %d\nft: %d\n", printf("%x\n", UINT_MAX), ft_printf("%x\n", UINT_MAX));

	printf("\n[X]\n");
	printf (" p: %d\nft: %d\n", printf("%X\n", UINT_MAX), ft_printf("%X\n", UINT_MAX));

	printf("\n");
	return (0);
}
