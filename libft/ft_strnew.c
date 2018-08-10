/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 16:51:09 by revan-wy          #+#    #+#             */
/*   Updated: 2018/06/04 21:47:30 by revan-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char *res;

	if (!(res = (char*)malloc(n + 1)))
		return (NULL);
	ft_bzero(res, n + 1);
	return (res);
}
