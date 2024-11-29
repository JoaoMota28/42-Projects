/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:19 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/24 19:07:19 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s, char del)
{
	size_t	counter;

	counter = 0;
	if (!s)
		return (0);
	while (s && s[counter] != del)
		counter++;
	if (s[counter] == del && del != '\0')
		counter++;
	return (counter);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src, '\n');
	i = 0;
	if (size == 0)
		i = srclen;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (srclen);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	i = 0;
	j = 0;
	len1 = ft_strlen(s1, '\n');
	len2 = ft_strlen(s2, '\n');
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len1 + 1);
	ft_strlcpy(str + len1, s2, len2 + 1);
	return (str);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s, '\n');
	if (s[--i] == (unsigned char) c)
		return ((char *)(s + i));
	while (--i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)(s + i));
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*array;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s, '\n'))
		length = 0;
	else
		length = ft_strlen(s + start, '\n');
	i = 0;
	if (length >= len)
		array = (char *)malloc((len + 1) * sizeof(char));
	else
		array = (char *)malloc((length + 1) * sizeof(char));
	if (array == NULL)
		return (array);
	while (i < len && i < length)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
