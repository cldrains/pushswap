/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:40:03 by tevers            #+#    #+#             */
/*   Updated: 2023/07/30 02:46:17 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void    ra(t_node *node)
{
    op_rotate(node);
}

void    rb(t_node *node)
{
    op_rotate(node);
}

void    rra(t_node *node)
{
    op_rev_rotate(node);
}
void    rrb(t_node *node)
{
    op_rev_rotate(node);
}
void    rrr(t_node *nodea, t_node *nodeb)
{
    op_rev_rotate(nodea);
    op_rev_rotate(nodeb);
}
