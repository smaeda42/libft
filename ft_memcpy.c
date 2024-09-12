/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:37:41 by smaeda            #+#    #+#             */
/*   Updated: 2024/09/09 16:18:32 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	if (dst_1 == NULL && src_1 == NULL)
		return (dst);
	while (n-- > 0)
		*(dst_1++) = *(src_1++);
	return (dst);
}
