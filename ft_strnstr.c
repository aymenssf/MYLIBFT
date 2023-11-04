/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:40:10 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/04 11:31:10 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
        
        size_t  i;
        size_t  j;

        i = 0;
        if(needle[0] == '\0')
                return ((char *)haystack);
        while(haystack[i] && i < n)
        {
                j = 0;                
                while(haystack[i + j] == needle[j] && haystack[i + j] != '\0' && (i + j) < n)
                        j++;
                if(needle[j] == '\0')
                        return((char *)haystack + i);
                i++;
        }
        return (NULL);
}

#include <stdio.h>
#include <strings.h>
int main()
{
        const char	to_find[6] = "perl";
        const char	str[20] = "la perl";
	printf ("%s", ft_strnstr (str, to_find, 7));
	// printf ("\n%s", strnstr (str, to_find, 2));       
}