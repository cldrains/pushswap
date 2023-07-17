/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:33:59 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 03:27:04 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "libft.h"
# include <stdbool.h>
# include "stack.h"

int     op_swap(t_stack *stack);
int     op_push(t_stack *stack1, t_stack *stack2);
int     op_rotate(t_stack *stack);
int     op_rev_rotate(t_stack *stack);

void    sa(t_stack *stack);
void    sb(t_stack *stack);
void    ra(t_stack *stack);
void    rb(t_stack *stack);
void    rra(t_stack *stack);
void    rrb(t_stack *stack);
void    pa(t_stack *stacka, t_stack *stackb);
void    pb(t_stack *stacka, t_stack *stackb);
void    ss(t_stack *stacka, t_stack *stackb);
void    rrr(t_stack *stacka, t_stack *stackb);

#endif