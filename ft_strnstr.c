/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:40:10 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/03 22:42:24 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
        
        size_t  i;
        size_t  j;

        i = 0;
        if(needle[j] == '\0')
                return (haystack);
        while(haystack[i] && i < n)
        {
                if(ft_strncmp(haystack, needle, n) == )
        }
}
// ft_strncmp