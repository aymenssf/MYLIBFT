/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:13:05 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/02 15:46:03 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return(0);
}

/* #include <stdio.h>
int main()
{
    int c = '/';
    printf("%d", ft_isalnum(c));
} */