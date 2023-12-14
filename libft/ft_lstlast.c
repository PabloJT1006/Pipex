/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:54:13 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/29 20:39:11 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
// 	t_list	*lst_uno = ft_lstnew("Elemento1");
// 	t_list	*lst_dos= ft_lstnew("Elemento2");
// 	t_list	*lst_tres= ft_lstnew("Elemento3");
// 	t_list	*lst_cuatro= ft_lstnew("Elemento4");
// 	t_list	*lst_last;
// //si es puntero de punter hay que pasarle la direccion,
	//ya que con esto se apunta
// //a lo que hay en la direccion mandada
// 	ft_lstadd_front(&lst_uno,lst_dos);
// 	ft_lstadd_front(&lst_uno,lst_tres);
// 	ft_lstadd_front(&lst_uno,lst_cuatro);
// 	ft_lstadd_front(&lst_uno,lst_cuatro);

// 	// si es un puntero solo se para la var a sequas ya que el puntero apunta
// 	//a ese valor
// 	lst_last = ft_lstlast(lst_uno);

// 	printf("%p",lst_last->content);

// 	return (0);

// }