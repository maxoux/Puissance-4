/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:27:36 by mlaize            #+#    #+#             */
/*   Updated: 2013/11/26 13:55:42 by mlaize           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *string, int chara, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		*((char *) string + i) = chara;
		i++;
	}
	return (string);
}
