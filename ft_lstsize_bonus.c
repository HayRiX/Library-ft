/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryahi <aryahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:15:11 by aryahi            #+#    #+#             */
/*   Updated: 2025/11/01 17:27:20 by aryahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	counte;

	if (!lst)
		return (0);
	counte = 0;
	while (lst)
	{
		counte++;
		lst = lst->next;
	}
	return (counte);
}
