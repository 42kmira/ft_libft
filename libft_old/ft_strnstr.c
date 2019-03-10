/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:20:26 by kmira             #+#    #+#             */
/*   Updated: 2019/02/12 21:47:45 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (j < len && *haystack)
	{
		i = 0;
		while (i + j < len && *needle && *needle == *haystack)
		{
			i++;
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return ((char *)haystack - i);
		needle = needle - i;
		haystack = haystack - i;
		haystack++;
		j++;
	}
	return (NULL);
}
