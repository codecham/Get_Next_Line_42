/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:05:19 by dcorenti          #+#    #+#             */
/*   Updated: 2022/01/25 16:42:05 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This is a main function for testing the get_next_line project. This main can test the mandatory part with a file or the stdin 
	USAGE: 	Run the exec with the file on arg for testing the reading on a file.
			Run the exec without arg for testing the stdin.
*/

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	int i;
	char *line;

	fd = 0;
	i = 1;
	if (argc > 2)
		return(0);
	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		printf("\nReading STDIN... Press ctrl + c or type exit for stop it\n");
	line = get_next_line(fd);
	while (line != NULL)
	{
		if (fd == 0 && strcmp(line, "exit\n") == 0)
		{
			free(line);
			return(0);
		}
		printf("[%d] -> %s\n", i, line);
		if (line != NULL)
			free(line);
		line = get_next_line(fd);
		i++;
	}
}
