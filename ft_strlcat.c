/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:30:19 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/01 14:14:05 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d;
	size_t	s;
	size_t	k;
	size_t	j;

	if (!dest && n == 0)
		return (ft_strlen(src));
	s = ft_strlen(src);
	j = s;
	d = ft_strlen (dest);
	k = d;
	if (d >= n)
		return (s + n);
	s = 0;
	while (src[s] && d < n - 1)
		dest[d++] = src[s++];
	dest[d] = '\0';
	return (k + j);
}
