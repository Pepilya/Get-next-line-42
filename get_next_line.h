#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8000
# include "libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);

#endif
