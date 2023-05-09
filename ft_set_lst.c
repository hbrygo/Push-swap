/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:06:27 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/09 15:21:08 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_set_lst(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list	*temp;

	if (argc == 1)
		return (NULL);
	if (argc == 2)
	{
		lst = NULL;
		lst = ft_lstsplit(argv[1]);
		return (lst);
	}
	else
		lst = ft_lstnew(ft_atoi(argv[1]));
	i = 1;
	while (++i < argc)
	{
		temp = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(&lst, temp);
	}
	return (lst);
}
