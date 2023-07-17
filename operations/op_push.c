/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:39:34 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 03:23:59 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void    pa(t_stack *stacka, t_stack *stackb)
{
    op_push(stacka, stackb);
}

void    pb(t_stack *stacka, t_stack *stackb)
{
    op_push(stackb, stacka);
}
