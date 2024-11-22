/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:49 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/18 15:30:49 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	n;
	int		count;

	count = 0;
	n = nb;
	if (n == -2147483648)
	{
		ft_putchar('-');
		count++;
		count += ft_putnbr(214748364);
		ft_putchar('8');
		return (++count);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		count++;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
	}
	ft_putchar('0' + n % 10);
	return (++count);
}
