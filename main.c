/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:07:54 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/05 11:08:53 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*lst;
	lst = ft_set_lst(argc, argv);
}
	// // system("clear");
	// int	i;
	// int	tab[argc - 1];
	// int	tab_a[argc - 1];
	// int	tab_b[argc - 1];
	// int	*temp;
	// int	moyenne;
	// int	a;
	// int	b;
	// int	count;
	// int z;

	// i = 0;
	// a = -1;
	// b = -1;
	// moyenne = 0;
	// if (argc == 1)
	// 	return (0);
	// if (argc == 2)
	// 	return (ft_atoi(argv[1]));
	// while (++i < argc)
	// 	tab[i - 1] = ft_atoi(argv[i]);
	// i = 0;
	// ft_printf("\nStack de debut: ");
	// while (++i < argc)
	// 	ft_printf("%d ", tab[i - 1]);
	// ft_printf("\n\n");
	// i = 0;
	// while (++i < argc)
	// 	moyenne += tab[i - 1];
	// moyenne /= (argc - 1);
	// i = 0;
	// while (++i < argc)
	// {
	// 	if (tab[i - 1] < moyenne)
	// 		tab_a[++a] = tab[i - 1];
	// 	else
	// 		tab_b[++b] = tab[i - 1];
	// }
	// i = -1;
	// moyenne = 0;
	// while (++i <= b)
	// 	moyenne += tab_b[i];
	// moyenne /= b + 1;
	// i = -1;
	// count = 0;
	// while (++i <= b)
	// {
	// 	if (tab_b[i] < moyenne)
	// 	{
	// 		tab_a[++a] = tab_b[i];
	// 		count++;
	// 	}
	// }
	// i = 0;
	// z = -1;
	// temp = malloc(sizeof(int) * count);
	// while (i <= b)
	// {
	// 	if (tab_b[i] >= moyenne)
	// 		temp[++z] = tab_b[i];
	// 	i++;
	// }
	// ft_display(tab_a, temp, a, z);