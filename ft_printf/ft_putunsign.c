/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:47:30 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/18 23:47:30 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsign(unsigned int nb)
{
	int		count;

	count = 0;
	if (nb > 9)
	{
		count += ft_putunsign(nb / 10);
	}
	ft_putchar('0' + nb % 10);
	return (++count);
}
