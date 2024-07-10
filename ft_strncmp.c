/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:00:33 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/29 15:28:37 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (n - i - 1 > 0))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
    const char *s1 = "hello";
    const char *s2 = "hello";
    size_t n = 5;

    int ft_result = ft_strncmp(s1, s2, n);
	int result = strncmp(s1, s2, n);
    printf("ft_strncmp ;%d\n", ft_result);
    printf("strncmp ;%d\n", result);
}
*/
