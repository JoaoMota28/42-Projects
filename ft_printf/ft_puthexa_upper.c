/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:58:46 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/19 00:58:46 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_upper(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 15)
	{
		count += ft_puthexa_upper(nb / 16);
	}
	if (nb % 16 < 10)
		ft_putchar('0' + nb % 16);
	else
		ft_putchar('A' - 10 + nb % 16);
	return (++count);
}