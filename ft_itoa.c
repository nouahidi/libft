/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:59:27 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/01 00:30:36 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

static int	len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = 0;
	if (nb == 0)
		return (ft_strdup("0"));
	str = malloc(len(n) + 1);
	if (!str)
		return (NULL);
	str[len(n)] = '\0';
	if (n < 0)
	{
		str[len(n) - 1] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i++] = 48 + (n % 10);
		n = n / 10;
	}
	return (ft_strrev(str));
}
