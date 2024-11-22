/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:38:03 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/19 19:38:03 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_long(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb > 15)
	{
		count += ft_puthexa_lower(nb / 16);
	}
	if (nb % 16 < 10)
		ft_putchar('0' + nb % 16);
	else
		ft_putchar('a' - 10 + nb % 16);
	return (++count);
}
