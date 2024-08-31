/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:21:54 by smaeda            #+#    #+#             */
/*   Updated: 2024/08/31 17:03:54 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int	word_len(const char *s, char c)
{
	int	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	list = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!list)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			list[j] = ft_substr(&s[i], 0, word_len(&s[i], c));
			if (!list[j])
				return (ft_free(list, ft_word_count(s, c)));
			j++;
			i += word_len(&s[i], c);
		}
	}
	return (list);
}

/*
int	main(void)
{
	char	str1[] = "\0aa\0bbb";
	char	c1;
	char	**lst;

	c1 = '\0';
	lst = ft_split(str1, c1);
}
*/
