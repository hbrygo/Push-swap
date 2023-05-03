/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:12:32 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/03 13:43:39 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

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

int	main(int argc, char **argv)
{
	system("clear");
	int	i;
	int	tab[argc - 1];
	int	tab_a[argc - 1];
	int	tab_b[argc - 1];
	int	moyenne;
	int	a;
	int	b;

	i = 0;
	a = -1;
	b = -1;
	moyenne = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
		return (ft_atoi(argv[1]));
	while (++i < argc)
		tab[i - 1] = ft_atoi(argv[i]);
	i = 0;
	ft_printf("\nStack de debut: ");
	while (++i < argc)
		ft_printf("%d ", tab[i - 1]);
	ft_printf("\n\n");
	i = 0;
	while (++i < argc)
		moyenne += tab[i - 1];
	moyenne /= (argc - 1);
	i = 0;
	while (++i < argc)
	{
		if (tab[i - 1] < moyenne)
			tab_a[++a] = tab[i - 1];
		else
			tab_b[++b] = tab[i - 1];
	}
	ft_display(tab_a, tab_b, a, b);
}
