/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:41:55 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/16 12:44:25 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list *lastone;

        if(!lst || !new)
                return ;
        lastone = ft_lstlast(*lst);
        if(lastone == NULL)
                *lst = new;
        else
                lastone -> next = new;       
}
/* #include <stdio.h>
int main()
{
        t_list *L = NULL;
        t_list *n1 = ft_lstnew("aymen");
        t_list *n2 = ft_lstnew("assaf");
        ft_lstadd_back(&L, n2);
        ft_lstadd_back(&L, n1);
        while(L)
        {
                printf("%s\t", (char *)L -> content);
                L = L -> next;
        }
} */