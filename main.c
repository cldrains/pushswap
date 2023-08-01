/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:01:41 by tevers            #+#    #+#             */
/*   Updated: 2023/08/01 19:08:29 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Pushswap.h"
#include "./include/stack.h"
#include "./include/libft.h"

int main(int argc, char **argv)
{
    t_data    *data;
    int         len;

    len = ob_checkinput(argc, argv);
    if (len < 1)
        return (write(2, "Error\n", 6), 1);
    data = ob_initdata(argc, argv);
    if (!data)
        return (write(2, "Allocation Failed\n", 18), 1);
    ft_printf("Hello World!%i", len);
    return (ob_freenode((t_node*)data->a), ob_freenode((t_node*)data->b), 0);
}
