/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:21:54 by smaeda            #+#    #+#             */
/*   Updated: 2024/08/22 21:26:00 by smaeda           ###   ########.fr       */
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
	int		j;

	if (!s || !c)
		return (NULL);
	word_count = ft_word_count(s, c);
//	list = (char **)malloc(sizeof(char *) * (word_count + 1));
	list = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!list)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if(s[i])
		{
			if (!ft_strchr(&s[i], c))
				word_len = ft_strlen(&s[i]);
			else 
				word_len = ft_strchr(&s[i], c) - &s[i];
			list[j] = ft_substr(&s[i], 0, word_len);
			if (!list[j])
			{
				while(j >= 0)
				{
					free(list[j]);
					j--;
				}
				free(list);
				return (NULL);
			}
			j++;
			i += word_len;
		}
	}
	list[j] = 0;
	return (list);
}

int	main()
{
	char	str1[] = "\0aa\0bbb";
	char	c1 = '\0';
	char	**lst;
	lst = ft_split(str1, c1);
}
