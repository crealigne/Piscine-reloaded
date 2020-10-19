/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:02:08 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/19 15:30:14 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void		ft_display_file(char *file_name)
{
	int		fd;
	char	buffer;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Erreur ouverture fichier.\n", 31);
		return ;
	}
	while (read(fd, &buffer, 1) > 0)
	{
		write(1, &buffer, 1);
	}
	if (close(fd) == -1)
	{
		write(2, "Erreur fermeture fichier.\n", 32);
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
		{
			write(2, "File nam missing,\n", 19);
			return (1);
		}
		else if (argc > 2)
		{
			write(2, "Too many arguments,\n", 20);
			return (1);
		}
		return (1);
	}
	else
		ft_display_file(argv[1]);
	return (0);
}
