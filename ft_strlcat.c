/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:05:52 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/02 21:52:20 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t srclen;
        size_t dstlen;
        size_t i;
        
        i = 0;
        srclen = ft_strlen(src);
        dstlen = ft_strlen(dst);

        if(size <= dstlen)
                return (size + srclen);
                
        while(src[i] && i < size)
        {
                dst[dstlen + i] = src[i];
                i++;
        }
        dst[dstlen + i] = '\0';
        return (ft_strlen(dst));
}

#include <stdio.h>
int main ()
{
	char dest[20] = "we ";
	char src[] = "arewelc";
	printf("%zu\n", ft_strlcat (dest, src, 6));
        printf("%s",dest);
}