/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryahi <aryahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:24:02 by aryahi            #+#    #+#             */
/*   Updated: 2025/10/29 20:11:20 by aryahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c, char ***box)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	*box = ft_calloc(count + 1, sizeof(char *));
	if (!*box)
		return (-1);
	return (count);
}

static int	word_len(const char *start, char end, char **word)
{
	int	len;

	len = 0;
	while (start[len] && start[len] != end)
		len++;
	*word = malloc(len + 1);
	if (!*word)
		return (-1);
	ft_strlcpy(*word, start, len + 1);
	return (len);
}

static char	**ft_free(char **box, int from)
{
	while (from >= 0)
		free(box[from--]);
	free(box);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**box;
	int		len;

	i = 0;
	j = 0;
	if (count_words(s, c, &box) == -1)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			len = word_len(&s[i], c, &box[j]);
			if (len == -1)
				return (ft_free(box, j - 1));
			j++;
			i += len;
		}
	}
	box[j] = NULL;
	return (box);
}
