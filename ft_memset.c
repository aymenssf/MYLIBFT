/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:35:53 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/04 14:11:36 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    // size_t i;
    unsigned char *p = s;

    // i = 0;
    
    while(n > 0)
    {
        if(*(p) == 0)
            break;
        *p = c;
        p++;
        n--;
    }
    return(p);
}

#include <stdio.h>
int main()
{
    char s[] = "2222";
    memset(s, 9, sizeof(int) * 3);
    printf("%d\t%d\t%d", s[0], s[1], s[2]);
}