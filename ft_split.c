/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:21:54 by smaeda            #+#    #+#             */
/*   Updated: 2024/07/10 20:53:33 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	word_len;
	size_t	word_count;
	int		i;

	if (!s || !c)
		return (NULL);
	word_count = ft_word_count(s, c);
	list = (char **)malloc(sizeof(char) * (word_count + 1));
	if (!list)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if(*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else 
				word_len = ft_strchr(s, c) - s;
			list[i] = ft_substr(s, 0, word_len);
			if (!list[i])
			{
				while(i >= 0)
				{
					free(list[i]);
					i--;
				}
				free(list);
				return (NULL);
			}
			i++;
			s += word_len;
		}
	}
	list[i] = 0;
	return (list);
}
int	main()
{
	char	str1[] = "          ";
	char	c1 = ' ';
	char	**lst;
	lst = ft_split(str1, c1);
}
