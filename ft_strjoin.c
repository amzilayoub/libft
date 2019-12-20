/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:17:52 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/21 18:01:37 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*ptr;

	if (!s1)
		return (0);
	if (!s2)
		return (ft_strdup(s1));
	lens1 = (int)ft_strlen(s1);
	lens2 = (int)ft_strlen(s2);
	if (!(ptr = (char*)malloc(lens1 + lens2 + 1)))
		return (0);
	ft_strlcpy(ptr, s1, lens1 + 1);
	ft_strlcat(ptr, s2, lens2 + lens1 + 1);
	return (ptr);
}
