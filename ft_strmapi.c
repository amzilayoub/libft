/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:07:38 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/15 13:41:33 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*ptr;

	if (!f || !s)
		return (NULL);
	i = -1;
	len = ft_strlen(s);
	if (!(ptr = (char*)malloc(len + 1)))
		return (0);
	while (++i < len)
		ptr[i] = f(i, s[i]);
	ptr[i] = '\0';
	return (ptr);
}
