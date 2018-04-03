/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 21:46:33 by dchiche           #+#    #+#             */
/*   Updated: 2018/01/18 20:32:56 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int		main()
{
	int i;
	int ret;
	int c;

	ret = printf("MINE>\t[%]\n", 25, 16215);
	printf(" <-- %d\n", ret);
	// sSpdDioOuUxXcC
	ret = ft_printf("MINE>\t[%]\n", 25, 16215);
	printf(" <-- %d\n", ret);
	return (0);
}
