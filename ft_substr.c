/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:21:46 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/01 12:36:18 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int st, size_t n)
{
	unsigned int	i;
	char			*nww;

	i = 0;
	if (!s)
		return (NULL);
	if (st > ft_strlen(s))
		return (ft_strdup(""));
	if (n >= ft_strlen(s) - st)
		n = ft_strlen(s) - st;
	nww = malloc(n + 1);
	if (!nww)
		return (NULL);
	while (s[st] && i < n)
		nww[i++] = s[st++];
	nww[i] = 0;
	return (nww);
}
