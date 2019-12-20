/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 12:07:41 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/19 19:55:10 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[0] == 0)
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[j++] == haystack[i])
		{
			while (needle[j] && haystack[i + j] && needle[j] == haystack[i + j])
				j++;
			if (!needle[j] && (i + j) <= len)
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
