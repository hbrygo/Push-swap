/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:07:54 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/11 18:15:32 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_suite(t_list **lst_a, t_list **lst_b)
{
	int	middle;
	int	i[3];

	middle = ft_middle(*lst_a);
	i[2] = 2;
	while (ft_lstsize(*lst_b) != 2)
	{
		middle = ft_middle(*lst_b);
		i[1] = ft_lstsize(*lst_b);
		i[0] = 0;
		while (i[0] <= i[1])
		{
			(*lst_b)->partition = i[2];
			if((*lst_b)->content > middle)
				ft_pa(lst_a, lst_b);
			else
				ft_rb(lst_b);
			i[0]++;
		}
		i[2]++;
	}
	if ((*lst_b)->content < (*lst_b)->next->content)
		ft_rb(lst_b);
	ft_pa(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

int	ft_tri(t_list **lst_a, t_list **lst_b, int next)
{
	int	i;
	int	end;
	int	part;

	i = 0;
	end = 1;
	part = 3;
	while (end == 1 && (*lst_a)->partition == 1)
	{
		if ((*lst_a)->content == next)
		{
			ft_ra(lst_a);
			while (ft_lstsize(*lst_b) > 0)
				ft_pa(lst_a, lst_b);
			next++;
		}
		else
			ft_pb(lst_a, lst_b);
		i++;
		// if ((*lst_a)->partition == 1)
		// 	ft_first_part(lst_a, lst_b);
		if ((*lst_a)->content == 0)
			end = 0;
	}
	return (next);
}

void	ft_first_part(t_list **lst_a, t_list **lst_b)
{
	int	middle;
	int	i[2];
	int	part;

	part = 1;
	i[0] = 0;
	middle = ft_middle(*lst_a);
	i[1] = ft_lstsize(*lst_a);
	while (i[0] < i[1])
	{
		(*lst_a)->partition = part;
		if ((*lst_a)->content < middle)
			ft_pb(lst_a, lst_b);
		else
			ft_ra(lst_a);
		i[0]++;
	}
	ft_suite(lst_a, lst_b);
}

int	main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;
	int	next;

	next = 0;
	lst_b = NULL;
	lst_a = ft_set_lst(argc, argv);
	ft_first_part(&lst_a, &lst_b);
	next = ft_tri(&lst_a, &lst_b, next);
}
