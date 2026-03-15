/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryahi <aryahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:58:29 by aryahi            #+#    #+#             */
/*   Updated: 2025/11/01 17:26:17 by aryahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}

static char	*mini_itoa(char *dest, unsigned int unm, int sign)
{
	int	i;

	i = 0;
	while (unm > 0)
	{
		dest[i++] = (unm % 10) + '0';
		unm /= 10;
	}
	if (sign)
		dest[i++] = '-';
	dest[i] = '\0';
	rev(dest);
	return (ft_strdup(dest));
}

char	*ft_itoa(int n)
{
	unsigned int	unm;
	char			str[12];
	int				sign;
	int				i;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		unm = -n;
	}
	else
		unm = n;
	i = 0;
	if (unm == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (ft_strdup(str));
	}
	return (mini_itoa(str, unm, sign));
}
