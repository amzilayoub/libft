/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:24:03 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/20 12:49:50 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	int				i;
	int				add;

	if (!dst && !src)
		return (NULL);
	i = 0;
	add = 1;
	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	if (dst == src)
		return (dst);
	if (!len)
		return (dst);
	i = (pdst > psrc && pdst < psrc + len) ? len - 1 : 0;
	add = (i != 0) ? -1 : 1;
	while (len--)
	{
		pdst[i] = psrc[i];
		i += add;
	}
	return (dst);
}
