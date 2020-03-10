/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:24:17 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/10 13:55:31 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	get_hex(int numb, char x)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_utoa(numb);
	i = ft_putstr_non_printable(str, x);
	return (i);
}
