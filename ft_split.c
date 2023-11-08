/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:17:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 13:17:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char **ft_split(char const *s, char c)
{
        size_t      i;
        size_t len;
        char **str;

        len = ft_strlen(s) - 1;

        if(!s)
                return (NULL);

        str = (char **)malloc(len * sizeof(s));
        while(s[i])
        {
                str = ft_strdup((char *)s[i]);
                str = c;
                i++;
        }
        str = '\0';
        return (str);
}

#include <stdio.h>

int main()
{
    char **s;
    int i  = 0;
    s = ft_split("  AYMEN  ",' ');
    //printf("%d\n",strings[0]);
     while (s[i] != NULL) {
        printf("%s\n", s[i]);
        i++;
    }
    return 0;
}