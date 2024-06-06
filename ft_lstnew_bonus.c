/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolay-un <lolay-un@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:00:51 by lolay-un          #+#    #+#             */
/*   Updated: 2019/11/16 19:28:42 by lolay-un         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)
{
	t_list *prueba;

	prueba = (t_list *)malloc(sizeof(t_list));
	if (!prueba)
		return (NULL);
	prueba->content = (void *)content;
	return (prueba);
}
