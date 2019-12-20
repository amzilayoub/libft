/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:17:28 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/20 12:51:06 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = -1;
	if (!size)
		return (lensrc);
	if (lendst > size)
		lensrc += size;
	else
		lensrc += lendst;
	while (src[++i] != '\0' && lendst < size - 1)
		dst[lendst++] = src[i];
	dst[lendst] = '\0';
	return (lensrc);
}
