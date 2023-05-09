/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:07:54 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/09 16:30:12 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display(t_list *lst)
{
	ft_printf("\n");
	while (lst)
	{
		ft_printf("%d ", lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	int	middle;
	int	i[2];

	lst_b = NULL;
	lst_a = ft_set_lst(argc, argv);
	while (ft_lstsize(lst_a) > 2)
	{
		i[0] = 0;
		middle = ft_middle(lst_a);
		i[1] = ft_lstsize(lst_a);
		while (i[0] <= i[1])
		{
			if (lst_a->content < middle)
				ft_pb(&lst_a, &lst_b);
			else
				ft_ra(&lst_a);
			i[0]++;
		}
	}
	if (lst_a->content > lst_a->next->content)
		ft_ra(&lst_a);
	while (ft_lstsize(lst_b) > 0)
	{
		if (lst_b->content < lst_b->next->content)
			ft_sb(lst_b);
		else if (lst_a->content > lst_a->next->content)
			ft_sa(lst_a);
		else
			ft_pa(&lst_a, &lst_b);
	}
	while (ft_lstsize(lst_a) > 2)
	{
		i[0] = 0;
		middle = ft_middle(lst_a);
		i[1] = ft_lstsize(lst_a);
		while (i[0] <= i[1])
		{
			if (lst_a->content >= middle)
				ft_pb(&lst_a, &lst_b);
			else
				ft_ra(&lst_a);
			i[0]++;
		}
	}
	if (lst_a->content > lst_a->next->content)
		ft_ra(&lst_a);
	while (ft_lstsize(lst_b) > 0)
	{
		if (lst_b->content < lst_b->next->content)
			ft_sb(lst_b);
		else if (lst_a->content > lst_a->next->content)
			ft_sa(lst_a);
		else
			ft_pa(&lst_a, &lst_b);
	}
	ft_pb(&lst_a, &lst_b);
}
