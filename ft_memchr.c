/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:45:18 by nouahidi          #+#    #+#             */
/*   Updated: 2022/10/30 14:36:18 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*st;
	size_t			i;

	i = 0;
	st = (unsigned char *)str;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return (st + i);
		i++;
	}
	return (NULL);
}
