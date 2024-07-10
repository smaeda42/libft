/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:37:41 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/24 21:47:34 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;
	int				i;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	i = 0;
	if (dst_1 == src_1)
		return (dst);
	while (n - i > 0)
	{
		dst_1[i] = src_1[i];
		i++;
	}
	return (dst);
}
