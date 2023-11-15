/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:46:16 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/15 17:46:11 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
        t_list *new;
        new = (t_list *)malloc(sizeof(t_list));
        if(!new)
                return(NULL);
        new -> content = content;
        new -> next = NULL;
        return (new);
}

#include <stdio.h>
int main()
{
        t_list *n1 = ft_lstnew("aymen");
        t_list *n2 = ft_lstnew("assaf");
        printf("%s\n", (char *)n1 -> content);
        printf("%s", (char *)n2 -> content);
}