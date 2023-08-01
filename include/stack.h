/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 03:16:22 by tevers            #+#    #+#             */
/*   Updated: 2023/08/01 19:21:34 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct		s_node
{
	int				val;
	struct s_node	*next;
}					t_node;

typedef struct		s_data
{
	struct t_node	*a;
	struct t_node	*b;
}					t_data;

typedef struct  s_operation
{
	char		*op;
	char		*pos;
}				t_operation;

int		op_swap(t_node *node);
int		op_push(t_node *node1, t_node *node2);
int		op_rotate(t_node *node);
int		op_rev_rotate(t_node *node);
void	sa(t_node *node);
void	sb(t_node *node);
void	ra(t_node *node);
void	rb(t_node *node);
void	rra(t_node *node);
void	rrb(t_node *node);
void	pa(t_node *nodea, t_node *nodeb);
void	pb(t_node *nodea, t_node *nodeb);
void	ss(t_node *nodea, t_node *nodeb);
void	rrr(t_node *nodea, t_node *nodeb);

#endif
