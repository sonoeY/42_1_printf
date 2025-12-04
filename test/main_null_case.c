/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_null_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:26:06 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 19:41:45 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *s = NULL;
	char *str = NULL;

	printf("\n[s]\n");
	printf ("p: %d\nft: %d\n", printf("%s\n", s), ft_printf("%s\n", s));
	printf("\n[p]\n");
	printf ("p: %d\nft: %d\n", printf("%p\n", str), ft_printf("%p\n", str));

	free(str);
	return (0);
}
