/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valinput.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:31:55 by tevers            #+#    #+#             */
/*   Updated: 2023/08/01 18:49:09 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Pushswap.h"

int ob_checkinput(int len, char **argv)
{
	int i;

	i = 0;
	while (--len)
		if (!argv[len] || argv[len] == NULL || i++ < -1)
			return (0);
	return (i);
}