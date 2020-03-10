/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:35:31 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/10 13:28:55 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int get_char(char c)
{
	int	i;

	i = ft_putchar(c);
	return (i);
}

int	get_str(char *str)
{
	int	i;

	i = ft_putstr(str);
	return (i);
}
