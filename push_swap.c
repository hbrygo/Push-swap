/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:12:32 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/05 11:14:00 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display(int *tab_a, int *tab_b, int a, int b)
{
	ft_printf("\n*******Pile A:********\n\n");
	ft_printf("       ");
	while (a >= 0)
		ft_printf("%d ", tab_a[a--]);
	ft_printf("\n\n**********************");
	ft_printf("\n*******Pile B:********\n\n");
	ft_printf("        ");
	while (b >= 0)
		ft_printf("%d ", tab_b[b--]);
	ft_printf("\n\n**********************\n\n");
}
