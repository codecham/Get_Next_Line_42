/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:41:51 by codecham          #+#    #+#             */
/*   Updated: 2022/01/07 18:50:07 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// # define BUFFER_SIZE 1000000

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		is_line(char *save);
char 	*ft_error(char *save);
#endif