/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:04:12 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/02 10:44:08 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int aln)
{
	if ((aln >= '0' && aln <= '9') || (aln >= 'a' && aln <= 'z')
		|| (aln >= 'A' && aln <= 'Z'))
		return (1);
	return (0);
}
