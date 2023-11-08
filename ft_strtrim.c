/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:30:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 19:51:46 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    char *ptr;
    size_t new_len;
    size_t start;
    size_t end;
    ptr = NULL;
    
    i = 0;
    if(s1 == NULL )
        return(NULL);

    if(s1[i])
    {
        start = 0;
        while ((ft_strchr(set, s1[start])))
            start++;
        end = ft_strlen(s1) - 1;
        while ((ft_strchr(set, s1[end])))
            end--;
        new_len = end - start;
        ptr = (char *)malloc(new_len + 1);
        while(i <= new_len)
        {
            ptr[i] = s1[start];
            i++;
            start++;
        }
        ptr[i] = '\0';
    }
    return (ptr);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "   * **aymen ** *    ";
    char s[] = " ";
    printf("%s", ft_strtrim(str, s));
} */