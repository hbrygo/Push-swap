/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:06:27 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/05 11:24:56 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_set_lst(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list	*temp;
	int		test;

	lst = ft_lstnew(ft_atoi(argv[1]));
	i = 1;
	while (++i < argc)
	{
		test = ft_atoi(argv[i]);
		temp = ft_lstnew(test);
		ft_lstadd_back(&lst, temp);
	}
	return (lst);
}
