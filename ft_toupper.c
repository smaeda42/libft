/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:12:17 by smaeda            #+#    #+#             */
/*   Updated: 2024/06/27 19:36:48 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/*
#include <ctype.h>
int	main()
{
	int c;
	int result;

	c = 120;
	result = toupper(c);
	printf("The result is:%c",result);

	c = 'A';
	result = toupper(c);
	printf("The result is:%c",result);
}
*/
