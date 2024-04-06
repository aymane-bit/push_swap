/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_creator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:36:09 by akajjou           #+#    #+#             */
/*   Updated: 2024/04/01 13:59:26 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     *array_creator(t_list *stack_a, int size)
{
    int *c;
    int i;

    i = 0;
    c = (int *)malloc(size * sizeof(int));
    while (i < size && stack_a != NULL)
    {
        c[i] = stack_a->content;
        stack_a = stack_a->next;
        i++;
    }
    return (c);
}