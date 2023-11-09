/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:17:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 21:45:06 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char **ft_split(char const *s, char c)
{
        size_t      i;
        size_t len;
        char **arr;
        char *str;
        size_t num_substrings;
        
        i = 0;
        len = 0;
        num_substrings = 0;  
        if(!s)
                return (NULL);   
        while(s[i])
        {
                if(s[i] == c)
                        num_substrings++;
                i++;
        }
        arr = (char **)malloc((num_substrings + 2) * sizeof(char *));
        len = ft_strlen(s) - 1;
        while(s[i])
        {
                if()
        }
        
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