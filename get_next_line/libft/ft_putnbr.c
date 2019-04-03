/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 00:58:47 by cwu               #+#    #+#             */
/*   Updated: 2018/03/20 22:23:43 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	(nb < 0 ? ft_putchar('-') : 1);
	if (nb > 0)
		nb = -nb;
	(nb <= -10 ? ft_putnbr(-(nb / 10)) : 1);
	ft_putchar('0' - nb % 10);
}
