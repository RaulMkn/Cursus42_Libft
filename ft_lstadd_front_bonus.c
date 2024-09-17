/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakende <rmakende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:11:21 by rmakende          #+#    #+#             */
/*   Updated: 2024/04/17 21:55:26 by rmakende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
 
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);

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