/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invert_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:31:51 by hubrygo           #+#    #+#             */
/*   Updated: 2023/05/05 11:50:42 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_sa(t_list lst)
{
	int	temp;

	if (lst.content == NULL || lst.next == NULL)
		return (0);
	temp = lst.content;
	lst.content = lst.next;
	lst.next = temp;
}

void	*ft_sb(t_list lst)
{
	int	temp;

	if (lst.content == NULL || lst.next == NULL)
		return (0);
	temp = lst.content;
	lst.content = lst.next;
	lst.next = temp;
}

void	*ft_ss(t_list *lst_a, t_list *lst_b)
{
	ft_sa(lst_a);
	ft_sb(lst_b);
}
