/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:27:31 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/24 21:52:24 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;
	size_t			i;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	if (dst_1 < src_1)
	{
		ft_memcpy(dst_1, src_1, n);
	}
	else if (dst_1 > src_1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst_1[i] = src_1[i];
		}
	}
	else
	{
		return (dst);
	}
	return (dst);
}
