/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:13:25 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/20 14:33:23 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (0);
	i = -1;
	while (++i < n && (s1[i] || s2[i]))
	{
		if ((int)s1[i] < 0 || (int)s2[i] < 0)
			return (1);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
