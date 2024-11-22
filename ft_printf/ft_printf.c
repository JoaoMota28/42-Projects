/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 02:34:56 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/18 02:34:56 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %% prints "%" but % prints nothing
// undefined behaviour when using format specifier with no arguments
// stop when using % with a non format specifier afterwards eg "arg%ljhd" -> arg

// validate bases to protect??

int specifier_executer(va_list *args, const char format)
{
    // cases for each letter type, else return -1 so as to stop
    if (format == 'c')
        return (ft_putchar(va_arg(*args, int)));
    else if (format == 's')
        return (ft_putstr(va_arg(*args, char *)));
    else if (format == 'i' || format == 'd')
        return (ft_putnbr(va_arg(*args, int)));
    else if (format == 'u')
        return (ft_putunsign(va_arg(*args, unsigned int)));
    else if (format == 'x')
        return (ft_puthexa_lower(va_arg(*args, unsigned int)));
    else if (format == 'X')
        return (ft_puthexa_upper(va_arg(*args, unsigned int)));
    else if (format == 'p')
        return (ft_putpointer(va_arg(*args, void *)));
    else if (format == '%')
        return (ft_putchar('%'));
    return (-1);
}

// add *restrict format ??
int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;
    int     ret;

    if (!format)
        return (-1);
    count = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
            ret = specifier_executer(&args, *++format);
        else
            ret = ft_putchar(*format);
        if (ret < 0)
        {
            va_end(args);
            return (-1);
        }
        count += ret;
        format++;
    }
    va_end(args);
    return (count);
}
#include <stdio.h>

int main(void)
{
    char    str[] = "ushsuhsksh";
    printf("%d\n", ft_printf("%p\n", (void *)str));
    printf("%d\n", printf("%p\n", (void *)str));
}
