/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:40:29 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/15 16:44:30 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	int				i;
	unsigned char	*buf_1;

	i = 0;
	buf_1 = (unsigned char *)buf;
	while (n - i > 0)
	{
		buf_1[i] = ch;
		i++;
	}
	return (buf_1);
}
