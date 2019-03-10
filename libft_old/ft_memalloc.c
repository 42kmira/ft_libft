/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:10:54 by kmira             #+#    #+#             */
/*   Updated: 2019/02/13 12:49:54 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;
	void	*head;

	result = malloc(sizeof(char) * (size));
	if (result == NULL)
		return (NULL);
	head = result;
	while (size--)
	{
		*(char *)result = 0;
		result = result + sizeof(char);
	}
	return (head);
}
