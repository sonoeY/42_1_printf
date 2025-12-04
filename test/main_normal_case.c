/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_nomal_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:26:27 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 18:29:13 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	unsigned int uns = 42;
	char *str = malloc(42);

	printf("\n[%%]\n");
	printf ("p: %d\nft: %d\n", printf("%%\n"), ft_printf("%%\n"));

	printf("\n[c]\n");
	printf ("p: %d\nft: %d\n", printf("%c\n", 'a'), ft_printf("%c\n", 'a'));

	printf("\n[s]\n");
	printf ("p: %d\nft: %d\n", printf("%s\n", "OK"), ft_printf("%s\n", "OK"));

	printf("\n[p]\n");
	printf ("p: %d\nft: %d\n", printf("%p\n", str), ft_printf("%p\n", str));

	printf("\n[d]\n");
	printf ("p: %d\nft: %d\n", printf("%d\n", uns), ft_printf("%d\n", uns));

	printf("\n[i]\n");
	printf ("p: %d\nft: %d\n", printf("%i\n", uns), ft_printf("%i\n", uns));

	printf("\n[u]\n");
	printf ("p: %d\nft: %d\n", printf("%u\n", uns), ft_printf("%u\n", uns));

	printf("\n[x]\n");
	printf ("p: %d\nft: %d\n", printf("%x\n", uns), ft_printf("%x\n", uns));

	printf("\n[X]\n");
	printf ("p: %d\nft: %d\n", printf("%X\n", uns), ft_printf("%X\n", uns));
	printf("\n");

	free(str);
	return (0);
}
