/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:09:52 by kmira             #+#    #+#             */
/*   Updated: 2019/02/13 17:17:12 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *head;

	head = (char *)s;
	while (*s)
		s++;
	while (head != s + 1)
		if (*s == c)
			return ((char *)s);
		else
			s--;
	return (NULL);
}
