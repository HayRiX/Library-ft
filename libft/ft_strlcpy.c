/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryahi <aryahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:45:07 by aryahi            #+#    #+#             */
/*   Updated: 2025/10/29 20:11:25 by aryahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	copy_size;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	if (len < size - 1)
		copy_size = len;
	else
		copy_size = size - 1;
	ft_memcpy(dst, src, copy_size);
	dst[copy_size] = '\0';
	return (len);
}
