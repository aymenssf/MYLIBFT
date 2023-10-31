/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:13:05 by aassaf            #+#    #+#             */
/*   Updated: 2023/10/31 15:22:35 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return(0);
}

#include <stdio.h>
int main()
{
    int c = '/';
    printf("%d", ft_isalnum(c));
}