/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomanuel <jomanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:15 by jomanuel          #+#    #+#             */
/*   Updated: 2024/11/24 19:07:15 by jomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* read(fd, 0, 0) tries to read 0 bytes to a NULL buffer, returning 0 if the
 file descriptor is valid and -1 if it is not */

char	*get_next_line(int fd)
{
	static char	*buff[BUFFER_SIZE + 1];
	char		*line;
	char		*next;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		//clear everything
		return (NULL);
	}
	line = NULL;
	read(fd, buff, BUFFER_SIZE);
	buff[BUFFER_SIZE] = '\0';
	line = ft_strjoin(line, *buff);
	next = ft_substr(buff, ft_strlen(buff, '\n'), ft_strlen(buff, '\0'));
	ft_strlcpy(buff, next, ft_strlen(next, '\0'));
	free(next);
	return (line);
}

int main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", _O_RDONLY);
	while (line = get_next_line(fd) != NULL)
	{
		printf("%s", line);
	}
	free(line);
}
