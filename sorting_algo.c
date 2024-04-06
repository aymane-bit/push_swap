/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:06:04 by akajjou           #+#    #+#             */
/*   Updated: 2024/04/01 20:53:41 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstorder(t_list *a, int *c)
{
	int		i;
	t_list	*lst;

	lst = a;
	while (lst)
	{
		i = 0;
		while (lst->content != c[i])
			i++;
		lst->order = i;
		lst = lst->next;
	}
}

void        three_sort(t_list **stack_a, t_list *stack_b, int *array)
{
    ft_lstorder(stack_a,array);

    ft_ra(stack_a,1);

        
}