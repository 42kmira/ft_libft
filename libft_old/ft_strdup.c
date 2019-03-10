/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:12:29 by kmira             #+#    #+#             */
/*   Updated: 2019/02/12 18:53:58 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *result;

	result = (char *)malloc(sizeof(*result) * (ft_strlen(s1) + 1));
	if (result == NULL)
		return (NULL);
	return (ft_strncpy(result, s1, ft_strlen(s1) + 1));
}
