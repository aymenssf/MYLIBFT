/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:30:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 01:30:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    char *ptr;

    i = 0;
    if(s1 == NULL )
        return(NULL);
    if(set == NULL)
    {
	    while (*s1 == 32 || (*s1 >= 9 && *s1 <= 13))
		        s1++;
    }
    else
    {
        while(*s1)
        {
            if(ft_strchr(set, *s1) == NULL)
                break;
            s1++;
        }
    }
}