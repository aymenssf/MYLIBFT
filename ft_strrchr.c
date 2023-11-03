/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:58:13 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/03 12:11:14 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
        int size;
        
        size = ft_strlen(s);
        int     i;
        
        i = size - 1;
        while(s[i])
        {
                if(s[i] == c)
                        return((char *)&s[i]);
                i--;
        }
        return(NULL);
}

/* #include <stdio.h>
int main()
{
        char t[] = "ayman";
        int c = 'a';
        char *result = ft_strrchr(t, c);
        printf("%s", result);
} */