/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:33:59 by tevers            #+#    #+#             */
/*   Updated: 2023/08/01 18:57:58 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "libft.h"
# include <stdbool.h>
# include "stack.h"

int		ob_checkinput(int len, char **argv);
int		ob_is_sorted(t_node *node);
void	ob_freenode(t_node *node);
t_data	*ob_initdata(int len, char **argv);
t_node	*ob_allocatedata(int len, char **argv);
t_node	*ob_assigndata(t_node *nxt, int nb);

#endif