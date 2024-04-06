/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:09:50 by akajjou           #+#    #+#             */
/*   Updated: 2024/04/01 20:53:09 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_list *stack_a,int i)
{
    int	tmp;
	int	tmp2;

	tmp = stack_a->content;
	tmp2 = stack_a->order;
	stack_a->content = stack_a->next->content;
	stack_a->order = stack_a->next->order;
	stack_a->next->content = tmp;
	stack_a->next->order = tmp2;
    if (i == 1)
        ft_printf("sa\n");    
}

void    ft_ra(t_list *stack_a,int i)
{
	t_list	*lst;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	lst = *a;
	*a = lst->next;
	lst->next = NULL;
	ft_lstadd_back(a, lst);
	if (i == 1)
		write(1, "ra\n", 3);
}