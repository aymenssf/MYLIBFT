/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:59:12 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/01 21:04:53 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *memset(void *s, int c, size_t n)
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
void    bzero(void *s, size_t size)
{
    memset(s, '\0', size);

}

#include <stdio.h>
int main()
{
    char s[] = "222";
    bzero(s, sizeof(char) * 3);
    printf("%d\t%d\t%d", s[0], s[1], s[2]);
}