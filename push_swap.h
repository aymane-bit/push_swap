/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 05:55:14 by akajjou           #+#    #+#             */
/*   Updated: 2024/04/01 20:53:23 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "LIBFT/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include <time.h>

void    ft_ra(t_list *stack_a,int i);
void    ft_sa(t_list *stack_a,int i);
int     *array_creator(t_list *stack_a,int size);
void    three_sort(t_list **stack_a,t_list **stack_b, int *array);
void        sort_beginner(t_list **stack_a,t_list **stack_b, int size);
int    ft_dup_detector(char **argv);
void    ft_arg_checker(char **argv);
void    ft_exit();
t_list    *ft_stack_creator(char **argv, t_list *stack_a);
void ft_lstprint_int(t_list *head);

#endif