/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:21:05 by kmira             #+#    #+#             */
/*   Updated: 2019/02/12 15:14:57 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *head;

	head = dst;
	while (len-- > 0)
	{
		if (*src)
			*dst++ = *src++;
		else
			*dst++ = '\0';
	}
	return (head);
}
