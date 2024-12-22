/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 21:45:54 by smaeda            #+#    #+#             */
/*   Updated: 2024/07/02 20:29:30 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_l;
	size_t	i;

	needle_l = ft_strlen(needle);
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len == 0 || !*haystack || (len < needle_l))
		return (NULL);
	while (i <= len - needle_l)
	{
		if (ft_strncmp(&haystack[i], &needle[0], needle_l) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
