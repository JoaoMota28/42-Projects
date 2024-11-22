/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:44:51 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/18 00:44:51 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_strlen(char *s);
int	ft_putnbr(int nb);
int	ft_putunsign(unsigned int nb);
int	ft_puthexa_lower(unsigned int nb);
int	ft_puthexa_upper(unsigned int nb);
int	ft_putpointer(void *p);

#endif