/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:51:13 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/15 19:05:52 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
        if(!lst)
                return (NULL);
        t_list *tmp;
        tmp = lst;
        while(tmp)
        {
                if(tmp -> next == NULL)
                        return (tmp);
                tmp = tmp -> next;
        }
        return (tmp);
}

#include <stdio.h>

int main()
{
        t_list *L = NULL;
        t_list *n1 = ft_lstnew("aymen");
        t_list *n2 = ft_lstnew("assaf");
        ft_lstadd_front(&L, n1);
        ft_lstadd_front(&L, n2);
        printf("%s", (char *)ft_lstlast(L -> content));
} 
