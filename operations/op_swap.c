/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:29:24 by tevers            #+#    #+#             */
/*   Updated: 2023/07/30 02:46:05 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void    sa(t_node *node)
{
    op_swap(node);
}

void    sb(t_node *node)
{
    op_swap(node);
}

void    ss(t_node *nodea, t_node *nodeb)
{
    op_swap(nodea);
    op_swap(nodeb);
}
