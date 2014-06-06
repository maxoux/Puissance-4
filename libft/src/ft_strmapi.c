/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:46:15 by mlaize            #+#    #+#             */
/*   Updated: 2013/11/28 11:20:00 by mlaize           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*newstr;

	size = 0;
	i = 0;
	size = ft_strlen(s);
	newstr = (char *)malloc(size);
	while (i < size)
	{
		newstr[i] = f((unsigned int)i, (char)s[i]);
		i++;
	}
	return (newstr);
}
