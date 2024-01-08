/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_troupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolay-un <lolay-un@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:07:59 by lolay-un          #+#    #+#             */
/*   Updated: 2024/01/08 20:10:09 by lolay-un         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_troupper(int c)
{
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); 
        //se convierte a mayúscula restando la diferencia entre el código ASCII de la letra minúscula y el de la letra mayúscula
    } else {
        return c;
    }
}