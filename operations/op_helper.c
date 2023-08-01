/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:44:59 by tevers            #+#    #+#             */
/*   Updated: 2023/08/01 19:04:58 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

int     op_swap(t_node *node)
{
	t_node *tmp;

	if (!node->next || !node)
		return (0);
	while (node->next->next != NULL)
		node = node->next;
	tmp = node;
	node = node->next;
	node->next = tmp;
	tmp->next = NULL;
	return (1);
}

int		op_push(t_node *nodea, t_node *nodeb)
{
	if (!nodea || !nodea->val || !nodeb)
		return (0);
	while (nodea->next != NULL)
		nodea = nodea->next;
	nodea->next = NULL;
	while (nodeb->next != NULL)
		nodeb = nodeb->next;
	nodeb->next = nodea;
	return (1);
}

int		op_rotate(t_node *node)
{
	t_node	*tmp;

	if (!node || !node->val || !node->next)
		return (0);
	tmp = node;
	while (node->next->next != NULL)
	{
		node->val = node->next->val;
		node = node->next;
	}
	return (1);
}

int		op_rev_rotate(t_node *node)
{
	int	tmp;

	if (!node || !node->val || !node->next)
		return (0);
	while (node->next != NULL)
		node = node->next;
	tmp = node->val;
	node->val = tmp;
	return (1);
}
