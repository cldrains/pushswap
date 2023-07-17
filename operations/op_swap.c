/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:29:24 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 03:24:04 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void    sa(t_stack *stack)
{
    op_swap(stack);
}

void    sb(t_stack *stack)
{
    op_swap(stack);
}

void    ss(t_stack *stacka, t_stack *stackb)
{
    op_swap(stacka);
    op_swap(stackb);
}
