/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:22:50 by kmira             #+#    #+#             */
/*   Updated: 2019/02/13 12:49:19 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *head;

	head = dst;
	if (dst < src)
	{
		while (len--)
		{
			*(char *)dst = *(char *)src;
			dst++;
			src++;
		}
	}
	else
	{
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
	}
	return (head);
}
