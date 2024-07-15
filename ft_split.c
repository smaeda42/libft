/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:21:54 by smaeda            #+#    #+#             */
/*   Updated: 2024/07/11 22:32:03 by smaeda           ###   ########.fr       */
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
			list[i] = ft_substr(&s[i], 0, word_len);
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
	char	str1[] = "lorem lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	c1 = ' ';
	char	**lst;
	lst = ft_split(str1, c1);
}
