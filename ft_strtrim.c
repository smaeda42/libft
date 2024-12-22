/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:23:17 by smaeda            #+#    #+#             */
/*   Updated: 2024/09/01 21:13:43 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[i]) && (i < j))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]) && (j >= i) && (j > 0))
		j--;
	newstr = ft_substr(s1, i, j - i + 1);
	return (newstr);
}
