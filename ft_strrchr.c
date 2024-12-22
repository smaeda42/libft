/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:13:59 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/28 22:07:17 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	c1;
	int		s_l;

	s1 = (char *)s;
	c1 = (char)c;
	s_l = ft_strlen(s1);
	while (s_l >= 0)
	{
		if (s1[s_l] == c1)
			return (&s1[s_l]);
		s_l--;
	}
	return (NULL);
}
