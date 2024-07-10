/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:10:46 by smaeda            #+#    #+#             */
/*   Updated: 2024/07/06 17:22:48 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		newstr = (char *)malloc(sizeof(char));
		if (!newstr)
			return (NULL);
		newstr[0] = 0;
		return (newstr);
	}
	if (len > s_len - start)
		len = s_len - start;
	while (start != 0)
	{
		s++;
		start--;
	}
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s, len + 1);
	return (newstr);
}
