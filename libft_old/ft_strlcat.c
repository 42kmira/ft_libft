/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:01:22 by kmira             #+#    #+#             */
/*   Updated: 2019/02/13 11:07:32 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i < dstsize && *dst)
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (i + ft_strlen(src));
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	while (*src)
	{
		src++;
		i++;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (i);
}
