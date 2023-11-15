/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:52:35 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/15 18:23:04 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
        if(!new || !lst)
                return ;
        new -> next = *lst;
        *lst = new;
}

/* #include <stdio.h>

int main()
{
        t_list *L = NULL;
        t_list *n1 = ft_lstnew("aymen");
        t_list *n2 = ft_lstnew("assaf");
        ft_lstadd_front(&L, n1);
        ft_lstadd_front(&L, n2);

        while(L)
        {
                printf("%s\t", (char *)L -> content);
                L = L -> next;
        }
} */