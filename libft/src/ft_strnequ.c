/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaize <mlaize@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:21:01 by mlaize            #+#    #+#             */
/*   Updated: 2013/11/26 11:10:38 by mlaize           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (i >= n)
		return (1);
	else if (s1[i] != s2[i])
		return (0);
	else
		return (1);
}
