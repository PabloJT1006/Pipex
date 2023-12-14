/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:40:14 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/30 18:02:09 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	aux = *lst;
	//al ser doble puntero hay que poner *lst para que apunte al puntero
	//tmb para hacer el next del doble puntero habria que ponerlo entre
	//parentesis
	//mientras el acutual no sea null que haga el bucle, en los demas era
	//hasta que el siguiente sea null
	while (*lst)
	{
		aux = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(aux, del);
	}
	*lst = NULL;
}
