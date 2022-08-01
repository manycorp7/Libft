/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:27:46 by yatamago          #+#    #+#             */
/*   Updated: 2022/08/01 17:25:04 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *src)
{
    int i;
    int size;
    char *dest;

    i = 0;
    size = ft_strlen(src) + 1;
    dest = malloc(sizeof(char) * (size));
    if(!dest)
    {
        return 0;
    }
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }    
    dest[i] = '\0';
    return (dest);    
}