/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:08:27 by nouahidi          #+#    #+#             */
/*   Updated: 2022/10/30 14:31:42 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	unsigned char	*dst;
	unsigned char	*sc;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!dest && !src)
		return (dst);
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dst);
}
