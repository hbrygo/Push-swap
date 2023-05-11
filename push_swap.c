/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:12:32 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/11 18:06:10 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_end(t_list **lst_a, t_list **lst_b)
// {
// 	int	middle;
// 	int	i[2];

// 	middle = ft_middle(*lst_a);
// 	while (ft_lstsize(*lst_b) != 2)
// 	{
// 		middle = ft_middle(*lst_b);
// 		i[1] = ft_lstsize(*lst_b);
// 		i[0] = 0;
// 		while (i[0] <= i[1])
// 		{
// 			if((*lst_b)->content > middle)
// 				ft_pa(lst_a, lst_b);
// 			else
// 				ft_rb(lst_b);
// 			i[0]++;
// 		}
// 	}
// 	if ((*lst_b)->content < (*lst_b)->next->content)
// 		ft_rb(lst_b);
// 	ft_pa(lst_a, lst_b);
// 	ft_pa(lst_a, lst_b);
// }

// void	ft_last_part(t_list **lst_a, t_list **lst_b)
// {
// 	int	middle;
// 	int	i[2];

// 	i[0] = 0;
// 	middle = ft_middle(*lst_a);
// 	i[1] = ft_lstsize(*lst_a);
// 	while (i[0] < i[1] && (*lst_a)->content != 0)
// 	{
// 		if ((*lst_a)->content < middle)
// 			ft_pb(lst_a, lst_b);
// 		else
// 			ft_ra(lst_a);
// 		i[0]++;
// 	}
// 	ft_end(lst_a, lst_b);
// }