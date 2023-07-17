/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:01:41 by tevers            #+#    #+#             */
/*   Updated: 2023/07/17 14:47:08 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"

int checkinput(int len, char **argv)
{
    int i;

    i = 0;
    while (--len)
        if (!argv[len] || argv[len] == NULL || i++ < -1)
            return (0);
    return (i);
}

void    freestack(t_stack *stack)
{
    t_stack     *tmp;

    while (stack->next)
    {
        tmp = stack;
        stack = stack->next;
        free(tmp);
        tmp = NULL;
    }
    free(stack);
    stack = NULL;
}

int     is_sorted(t_stack *stack)
{
    while (stack && stack ->next)
        if (stack->val > stack->next->val)
            return (0);
    return (1);
}

int         get_nextnb(char *str)
{
    int nb;

    nb = ft_atoi(str);
    return (nb);
}

t_stack     *assignstacks(t_stack *pre, t_stack *nxt, int nb)
{
    nxt = (t_stack *)malloc(sizeof(t_stack));
    if (!nxt)
        return (NULL);
    nxt->val = nb;
    nxt->prev = pre;
    nxt->next = NULL;
    if (pre)
        pre->next = nxt;
    return nxt;
}

t_stack     *allocatestacks(int len, char **argv)
{
    t_stack     *stack;
    t_stack     *tmp;

    tmp = NULL;
    stack = NULL;
    while (len--)
    {
        if (!stack)
        {
            stack = assignstacks(NULL, stack, ft_atoi(argv[len]));
            tmp = stack;
        }
        else
            tmp = assignstacks(tmp, tmp->next, ft_atoi(argv[len]));
        if (!tmp)
            return (NULL);
    }
    return (stack);
}

t_stacks    *initstacks(int  len, char **argv)
{
    t_stacks    *head;

    head = (t_stacks *)malloc(sizeof(t_stacks));
    if (!head)
        return (NULL);
    head->a = NULL;
    head->b = NULL;
    head->a = allocatestacks(len, argv);
    return (head);    
}

int main(int argc, char **argv)
{
    t_stacks    *stacks;
    int         len;

    len = checkinput(argc, argv);
    if (len < 1)
        return (write(2, "Error\n", 6), 1);
    stacks = init_stacks(argc, argv);
    if (!stacks)
        return (write(2, "Allocation Failed\n", 18), 1);
    // if (len < 10)
    //     bruteforce(stacka, stackb);
    // else
    // {
    //     lowest = pick_algo(stacka, stackb);
    //     do_algo(lowest, stacka, stackb);
    // }
    ft_printf("Hello World!%i, %i", len, lowest);
    return (freestack(stacks->a), freestack(stacks->b), 0);
}