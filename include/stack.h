/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 03:16:22 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 13:25:22 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct      s_stack
{
	int				val;
	struct s_stack	*next;
    struct s_stack  *prev;
}                   t_stack;

typedef struct  s_stacks
{
    t_stack     *a;
    t_stack     *b;
}               t_stacks;

typedef struct  s_operation
{
    char        *op;
    char        *pos;
}               t_operation;

#endif