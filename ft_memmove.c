/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:00:21 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/01 15:08:11 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void	*dest, const	void	*src, size_t	n)
{
	char	*dst;
	char	*sc;
	size_t	i;

	dst = (char *)dest;
	sc = (char *)src;
	if (!dst && !sc)
		return (dest);
	if (dst > sc)
	{
		while (n--)
			dst[n] = sc[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = sc[i];
			i++;
		}
	}
	return (dst);
}
