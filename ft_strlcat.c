/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:19:31 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/27 20:38:30 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	if (dst_l >= dstsize)
		return (dstsize + src_l);
	else if ((dst == 0) + (src == 0))
		return (dst_l + src_l);
	else if (dstsize - dst_l - 1 > 0)
		ft_strlcpy(&dst[dst_l], src, dstsize - dst_l);
	else
		return (dst_l + src_l);
	return (dst_l + src_l);
}
