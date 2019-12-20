/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:48:02 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/17 00:10:30 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count(int n)
{
	int c;

	c = 1;
	while ((n = (n / 10)))
		c++;
	return (c);
}

static char	*rev(char *s, int len)
{
	int		i;
	char	tmp;

	i = -1;
	while (++i < --len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char			*ptr;
	int				len;
	int				i;
	unsigned int	nb;

	i = -1;
	len = count(n);
	nb = n;
	len = (n < 0) ? len + 1 : len;
	if (!(ptr = (char*)malloc(len + 1)))
		return (0);
	if (n < 0)
	{
		ptr[++i] = '-';
		nb = -nb;
	}
	len = (n < 0) ? len - 1 : len;
	while (len--)
	{
		ptr[++i] = nb % 10 + '0';
		nb /= 10;
	}
	ptr[++i] = '\0';
	return ((n < 0) ? rev(ptr + 1, i - 1) - 1 : rev(ptr, i));
}
