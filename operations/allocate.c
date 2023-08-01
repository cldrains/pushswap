/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:30:51 by tevers            #+#    #+#             */
/*   Updated: 2023/08/01 19:25:57 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void	ob_freenode(t_node *node)
{
	t_node		*tmp;
	while (node->next)
	{
		tmp = node;
		node = node->next;
		free(tmp);
		tmp = NULL;
	}
	free(node);
	node = NULL;
}

int		ob_is_sorted(t_node *node)
{
	while (node && node ->next)
		if (node->val > node->next->val)
			return (0);
	return (1);
}

t_node		*ob_assigndata(t_node *nxt, int nb)
{
	nxt = (t_node *)malloc(sizeof(t_node));
	if (!nxt)
		return (NULL);
	nxt->val = nb;
	nxt->next = NULL;
	return (nxt);
}

t_node		*ob_allocatedata(int len, char **argv)
{
	t_node *node = NULL;
	t_node *tmp = NULL;
	const char *n;
	int		i;

	i = -1;
	while (len > ++i)
	{
		n = argv[i];
		if (!node)
		{
			node = ob_assigndata(node, ft_atoi(n));
			tmp = node;
		}
		else
			tmp = ob_assigndata(tmp->next, ft_atoi(n));
		if (!tmp)
		{
			while (node)
			{
				tmp = node;
				node = node->next;
				free (tmp);
			}
			return (NULL);
		}
	}
	return (node);
}

t_data		*ob_initdata(int len, char **argv)
{
	t_data *head;

	head = (t_data *)malloc(sizeof(t_data));
	if (!head)
		return (NULL);
	head->a = ob_allocatedata(len, argv);
	head->b = (NULL);
	if (!head->a)
		return NULL;
	return (head);
}