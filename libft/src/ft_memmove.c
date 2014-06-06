/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 11:24:31 by mlaize            #+#    #+#             */
/*   Updated: 2013/11/26 13:57:30 by mlaize           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char		*tmp;

	tmp = (char *) malloc(length);
	ft_memcpy(tmp, src, length);
	ft_memcpy(dest, tmp, length);
	free(tmp);
	return (dest);
}
