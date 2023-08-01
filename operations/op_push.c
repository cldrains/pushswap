/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:39:34 by tevers            #+#    #+#             */
/*   Updated: 2023/07/30 04:25:13 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void	pa(t_node *nodea, t_node *nodeb)
{
	op_push(nodea, nodeb);
}

void	pb(t_node *nodea, t_node *nodeb)
{
	op_push(nodeb, nodea);
}
