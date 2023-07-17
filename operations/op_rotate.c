/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:40:03 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 03:24:02 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

void    ra(t_stack *stack)
{
    op_rotate(stack);
}

void    rb(t_stack *stack)
{
    op_rotate(stack);
}

void    rra(t_stack *stack)
{
    op_rev_rotate(stack);
}
void    rrb(t_stack *stack)
{
    op_rev_rotate(stack);
}
void    rrr(t_stack *stacka, t_stack *stackb)
{
    op_rev_rotate(stacka);
    op_rev_rotate(stackb);
}
