/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolay-un <lolay-un@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 23:10:53 by lolay-un          #+#    #+#             */
/*   Updated: 2019/11/15 23:14:42 by lolay-un         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;

	n = 0;
	while (lst != NULL)
	{
		++n;
		lst = lst->next;
	}
	return (n);
}