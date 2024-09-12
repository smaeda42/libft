/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:27:31 by smaeda            #+#    #+#             */
/*   Updated: 2024/09/09 22:08:27 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst_1 <= src_1)
		ft_memcpy(dst_1, src_1, n);
	else
	{
		while (n-- > 0)
			dst_1[n] = src_1[n];
	}
	return (dst);
}
