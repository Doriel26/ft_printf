/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 15:29:23 by dchiche           #+#    #+#             */
/*   Updated: 2017/12/27 15:33:02 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putnbr_base_recv(uintmax_t n, char *base, uintmax_t b)
{
	if (n >= b)
	{
		ft_putnbr_base_recv(n / b, base, b);
		ft_putnbr_base_recv(n % b, base, b);
	}
	else
		ft_putchar(base[n]);
}

void			ft_putnbr_base(uintmax_t n, char *base)
{
	uintmax_t b;

	b = (uintmax_t)ft_strlen(base);
	ft_putnbr_base_recv(n, base, b);
}
