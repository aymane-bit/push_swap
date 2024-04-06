/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:47:00 by akajjou           #+#    #+#             */
/*   Updated: 2024/04/01 20:56:47 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void        sort_beginner(t_list **stack_a,t_list **stack_b, int size)
// {
//     int *c;
//     int i = 0;
//     c = array_creator(stack_a, size);
//     if (size == 3)
//         three_sort(&stack_a, &stack_b,c);

        
//     // while (stack_a)
//     // {
//     //     ft_printf("%d\n",stack_a->content);
//     //     stack_a = stack_a->next;
//     // }   

// }
t_list    *ft_stack_creator(char **argv, t_list *stack_a)
{
    t_list *new;
    int i;
    int a;

    i = 0;
    while (argv[i])
    {
        a = ft_atoi(argv[i]);
        new = ft_lstnew(a);
        ft_lstadd_back(&stack_a, new);
    i++;
    }
    return (stack_a);
}

int    ft_dup_detector(char **argv)
{
    int d;
    int i;

    d = 0;
    while (argv[d])
    {
        i = d + 1;
        while (argv[i])
        {
            if (ft_strcmp(argv[d],argv[i]) == 0)
                ft_exit();
        i++;
        }
    d++; 
    }
    return (d);
}

void    ft_arg_checker(char **argv)
{
    int i;
    int d;

    d = 0;
    i = 0;
    while (argv[d])
    {
        i = 0;
        if (argv[d][i] == '-' || argv[d][i] == '+')
            i++;
        while (argv[d][i])
        {
            if (ft_isdigit(argv[d][i]) == 0)
                ft_exit();      
        i++;   
        }
    d++;    
    }
    
}

void    ft_exit()
{
    ft_printf("Error\n");
    exit (1);
}
