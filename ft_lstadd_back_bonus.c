/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:35:56 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/17 21:48:12 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

/*
int main() {
    t_list *head = NULL;

    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1->content = "Node 1";
    node1->next = NULL;

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->content = "Node 2";
    node2->next = NULL;

    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node1);

    printf("Lista enlazada:\n");
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(node1);
    free(node2);

    return 0;
}
*/