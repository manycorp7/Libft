/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:27:56 by yatamago          #+#    #+#             */
/*   Updated: 2022/08/02 00:12:38 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>

int ft_atoi(const char *str);
size_t ft_strlen(const char *str);
char    *strdup(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);

#endif