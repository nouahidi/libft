/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:46:09 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/01 12:31:32 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const	char *lit, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*b;

	b = (char *)big;
	i = 0;
	if ((lit[0] == '\0' && len == 0) || lit[0] == '\0')
		return (b);
	if (len == 0)
		return (NULL);
	while (b[i] && i < (len - ft_strlen(lit) + 1))
	{
		j = 0;
		k = i;
		while (b[k] == lit[j])
		{
			if (lit[j + 1] == '\0')
				return (b + i);
			j++;
			k++;
		}
		i++;
	}
	return (NULL);
}
