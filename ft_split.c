/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:17:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/10 21:54:59 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_substr(char const *s, char c)
{
        int     i;
        int     size_substr;

        i = 0;
        size_substr = 0;
        while(s[i])
        {
                if(s[i] == c)
                        i++;
                else
                {
                        size_substr++;
                        while(s[i] != c && s[i])
                                i++;
                }
        }
        return (size_substr);
            
}
char *copysubstr(char const *s, char c)
{
        size_t len;
        size_t i;

        i = 0;
        len = 0;
        while(s[len] && s[len] != c)
        {
                len++;
        }
        char *substr;
        
        substr = (char *)malloc(sizeof(len + 1));
        if(substr != NULL)
        {
                while(substr[i] && len > i)
                {
                        substr[i] = s[i];
                        i++;
                }
                substr[i] = '\0';
        }
        return(substr);
}
char **ft_split(char const *s, char c)
{
        int totsubstr;
        size_t i;
        totsubstr = 0;
        totsubstr = count_substr(s, c);
        char **arr;
        
        arr = (char **)malloc((totsubstr + 1) * sizeof(char *));
        if(arr != NULL)
        {
                i = 0;
                while (*s)
                {
                        if(*s == c)
                                s++;
                        else
                        {
                                arr[i] = copysubstr(s, c);
                                i++;
                                while(*s && *s != c)
                                {
                                        s++;
                                }
                        }
                }
                arr[i] = NULL;
        }
        return (arr);
}

#include <stdio.h>
int main()
{
    char **s;
    int i = 0;
    
    // Test case 1
    s = ft_split("        Hello-World", '-');
    printf("Test Case 1:\n");
    while (s[i] != NULL)
    {
        printf("%s\n", s[i]);
        i++;
    }
    
    // Free allocated memory
    for (i = 0; s[i] != NULL; i++)
    {
        free(s[i]);
    }
    free(s);

    // Test case 2
    i = 0;
    s = ft_split("       This,is,a,test", ',');
    printf("\nTest Case 2:\n");
    while (s[i] != NULL)
    {
        printf("%s\n", s[i]);
        i++;
    }

    // Free allocated memory
    for (i = 0; s[i] != NULL; i++)
    {
        free(s[i]);
    }
    free(s);

    return 0;
}