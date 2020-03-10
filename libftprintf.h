/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:27:15 by imartin-          #+#    #+#             */
/*   Updated: 2020/03/10 13:20:29 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft.h"

int				get_int(int n);

int				get_unsi(unsigned int n);
char			*ft_utoa(unsigned int n);

int				get_hex(int n, char c);

int				get_str(char *str);
int				get_char(char c);

int				get_ptr(int n);

int				ft_printf(const char *fmt, ...);

#endif
