/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:45:46 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/21 18:02:58 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	check(char const *s1, char const *set, int direction)
{
	int i;
	int j;
	int	ischar;

	i = 0;
	if (s1 == NULL)
		return (0);
	if (direction == -1)
		i = ft_strlen(s1) - 1;
	while (s1[i] && i >= 0)
	{
		ischar = 0;
		j = -1;
		while (set[++j])
			if (s1[i] == set[j])
				ischar = 1;
		if (!ischar)
			return (i);
		i += direction;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = -1;
	start = check(s1, set, 1);
	end = check(s1, set, -1);
	if (start > end)
		return (ft_strdup(""));
	if (!(ptr = (char*)malloc(end - start + 2)))
		return (0);
	ft_strlcpy(ptr, s1 + start, end - start + 2);
	if (!ptr)
		return (ft_strdup(""));
	return (ptr);
}
