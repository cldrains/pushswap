/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:44:59 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 03:23:56 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

int     op_swap(t_stack *stack)
{
    int     tmp;

    if (!stack || !stack->val)
        return (0);
    while (stack->next != NULL)
        stack = stack->next;
    if (stack->prev != NULL)
    {
        tmp = stack->val;
        stack->val = stack->prev->val;
        stack->prev->val = tmp;
    }
    else
        return (0);
    return (1);
}

int     op_push(t_stack *stacka, t_stack *stackb)
{
    if (!stacka || !stacka->val || !stackb)
        return (0);
    while (stacka->next != NULL)
        stacka = stacka->next;
    while (stackb->next != NULL)
        stackb = stackb->next;
    stackb->next = stacka;
    if (stacka->prev != NULL)
        stacka->prev->next = NULL;
    return (1);
}

int     op_rotate(t_stack *stack)
{
    int tmp;

    if (!stack || !stack->val || !stack->next)
        return (0);
    tmp = stack->val;
    while (stack->next != NULL)
    {
        stack->val = stack->next->val;
        stack = stack->next;
    }
    stack->val = tmp;
    return (1);
}

int     op_rev_rotate(t_stack *stack)
{
    int tmp;

    if (!stack || !stack->val || !stack->next)
        return (0);
    while (stack->next != NULL)
        stack = stack->next;
    tmp = stack->val;
    while (stack->prev != NULL)
    {
        stack->prev->val = stack->val;
        stack = stack->prev;
    }
    stack->val = tmp;
    return (1);
}