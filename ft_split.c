/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:15:09 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/13 11:10:26 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lentab(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (s[0] != c)
		j++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

static int	ft_lenstr(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	char	**ft_free(char **tab, int index)
{
	int	i;

	i = 0;
	while (i < index)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	t_var	var;

	var.i = 0;
	var.j = 0;
	tab = malloc((ft_lentab(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (ft_lentab(s, c) > var.j && ft_strlen(s) != 0)
	{
		while (s[var.i] == c)
			var.i++;
		if (s[var.i] && s[var.i] != c)
		{
			tab[var.j] = malloc(ft_lenstr(s + var.i, c) + 1);
			if (!tab[var.j])
				return (ft_free(tab, var.j));
			var.k = 0;
			while (s[var.i] && s[var.i] != c)
				tab[var.j][var.k++] = s[var.i++];
			tab[var.j++][var.k] = '\0';
		}
	}
	return (tab[var.j] = NULL, tab);
}
