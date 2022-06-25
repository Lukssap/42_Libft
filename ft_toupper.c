/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantana <lsantana@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:39:54 by lsantana          #+#    #+#             */
/*   Updated: 2022/06/17 01:39:08 by lsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < -1)
		c = (unsigned char)c;
	if (c >= 97 && c <= 122)
		c = (unsigned char)c - 32;
	return (c);
}
