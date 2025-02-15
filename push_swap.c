/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:19:47 by akajjou           #+#    #+#             */
/*   Updated: 2024/04/06 02:12:16 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    is_sorted(char **argv)
{
    int a;
    int i;
    int b;

    i = 0;
    while (argv[i] && argv[i + 1])
    {
        a = ft_atoi(argv[i]);
        b = ft_atoi(argv[i + 1]);
        if (a > b)
            return (0);
    i++;
    }
    ft_printf("sorted\n");
    return (1);
}

void ft_sort_init(int argc, char **argv)
{
    t_list *stack_a = NULL;
    t_list *stack_b;

    int j;
    ft_arg_checker(argv);
    j = ft_dup_detector(argv);
    if (is_sorted(argv) == 1)
        return ;
    int *stack_a
}

int main(int argc, char **argv)
{
    int i;
    int len;
    char *spc = ft_strdup(" ");
    char *str = argv[1];
    
    i = 2;
    if (argc < 2)
        return (0);
    str = ft_strjoin(str, spc);
    while (argv[i])
    {
        str = ft_strjoin(str, argv[i]);
        str = ft_strjoin(str, spc);
    i++;
    }   
    argv = ft_split(str, ' ');
    ft_sort_init(argc, argv);
}
