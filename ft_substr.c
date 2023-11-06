/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:27:19 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/06 15:04:44 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t  i;
        char *ptr;

        if(s == NULL)
                return (NULL);
        i = 0;
        ptr = (char *)malloc(sizeof(len) + 1);
        if(ptr == NULL)
                return (NULL);
        while (ptr[i] && i < len)
        {
                ptr[i] = s[start];
                i++;
                start++;
        }
        ptr[i] = '\0';
        return ((char *)ptr);
}

/* #include <stdio.h>
int main()
{
        char str[] = "Hello World!";
        size_t len = 7;
        unsigned int s = 0;
        printf("%s\n", ft_substr(str, s, len)); // prints "World!"
} */
