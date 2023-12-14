/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:13:45 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/30 14:27:56 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    
    last = NULL;
    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
    }
    else
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}
