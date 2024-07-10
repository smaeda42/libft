/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:26:32 by smaeda            #+#    #+#             */
/*   Updated: 2024/07/03 22:07:09 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	size_t	s1_l;

	s1_l = ft_strlen(s1);
	newstr = (char *)malloc(sizeof(char) * (s1_l + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, s1_l + 1);
	return (newstr);
}
