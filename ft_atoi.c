/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatamago <yatamago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:27:51 by yatamago          #+#    #+#             */
/*   Updated: 2022/08/01 17:24:55 by yatamago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int signe;
    int res;

    i = 0;
    signe = 1;
    res = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if(str[i] == '-')
    {
        signe = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * signe);
}