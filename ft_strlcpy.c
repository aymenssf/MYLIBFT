/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:04:37 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/02 17:29:22 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
        size_t i;
        if(!src || !dst)
                return (0);
        while(src && i < size)
        {
                dst[i] = src[i];
                i++;
                size--;
        }
        *dst = '\0';
        return (ft_strlen(src));
}

#include <stdio.h>
int main()
{
	char src [] = "DONT PANIC";
	char dest [10] = "";
	unsigned int n = 7;
    
	printf("%zu", ft_strlcpy(dest, src, n));
}