/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_after_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamagu <soyamagu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:20:43 by soyamagu          #+#    #+#             */
/*   Updated: 2025/12/03 18:21:17 by soyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("p: %% \n");
	ft_printf("f: %% \n\n");

	printf("p: %%%% \n");
	ft_printf("f: %%%% \n\n");

	printf("p: %% %% %% \n");
	ft_printf("f: %% %% %% \n\n");

	printf("p: %%  %%  %% \n");
	ft_printf("f: %%  %%  %% \n\n");

	printf("p: %%   %%   %% \n");
	ft_printf("f: %%   %%   %% \n\n");

	printf("p:%%\n");
	ft_printf("f:%%\n\n");

	printf("p:%% %%\n");
	ft_printf("f:%% %%\n\n");
	return (0);
}
