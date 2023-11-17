/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:05:48 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/02 11:44:38 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *pdest;
    unsigned char *psrc;
    
    i = 0;
    if(dest == NULL && src == NULL)
        return(NULL);
    if(dest == src)
        return(dest);
    pdest = (unsigned char *) dest;
    psrc = (unsigned char *) src;
    while(n > 0)
    {
        pdest[i] = psrc[i];
        i++;
        n--;
    }
    return (dest);
}