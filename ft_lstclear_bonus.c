/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:20:44 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/17 20:05:31 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = 0;
}
/*
int main(void)
{
	t_list *head = NULL;

	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	node1->content = "Node 1";
	node1->next = NULL;

	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	node2->content = "Node 2";
	node2->next = node1;
	return 0;
	
	head = node1;

	ft_lstclear(&head);

    printf("Lista enlazada:\n");
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(node1);
    free(node2);
}
*/