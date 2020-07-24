/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmathews <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:39:01 by zmathews          #+#    #+#             */
/*   Updated: 2019/06/29 13:26:39 by zmathews         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_isalnum(int c)
{
	if (((c > 47) && (c < 58)) || (((c > 64) && (c < 91))) || ((c > 96)
				&& (c < 123)))
		return (1);
	else
		return (0);
}