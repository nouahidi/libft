/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:17:32 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/02 10:28:41 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t m, size_t x)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = malloc(m * x);
	if (!p)
		return (NULL);
	while (i < (m * x))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
