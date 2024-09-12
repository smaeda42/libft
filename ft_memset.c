/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:40:29 by smaeda            #+#    #+#             */
/*   Updated: 2024/09/07 21:34:04 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*buf_1;

	buf_1 = (unsigned char *)buf;
	while (n-- > 0)
		*(buf_1++) = (unsigned char) ch;
	return (buf);
}
