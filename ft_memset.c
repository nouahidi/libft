/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:18:17 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/02 14:41:32 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pntr, int c, size_t n)
{
	unsigned char	*pnt;
	size_t			i;

	pnt = (unsigned char *)pntr;
	i = 0;
	while (i < n)
	{
		pnt[i] = (unsigned char)c;
		i++;
	}
	return (pnt);
}
