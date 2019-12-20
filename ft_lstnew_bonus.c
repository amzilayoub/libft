/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:36:57 by aamzil            #+#    #+#             */
/*   Updated: 2019/10/19 17:01:34 by aamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}
