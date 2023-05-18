#ifndef MICROSHELL_H
# define MICROSHELL_H

# include "../libs/libft/includes/libft.h"

# include <stdio.h>      // printf
# include <stdlib.h>     // malloc, free, exit
# include <unistd.h>     // write, access, open, read, close, fork, execve, dup, dup2, pipe
# include <sys/types.h>  // wait, waitpid, wait3, wait4, stat, lstat, fstat, unlink
# include <sys/wait.h>   // wait, waitpid, wait3, wait4
# include <signal.h>     // signal, sigaction, sigemptyset, sigaddset, kill
# include <errno.h>      // strerror
# include <dirent.h>     // opendir, readdir, closedir
# include <string.h>     // strerror
# include <fcntl.h>      // open
# include <sys/stat.h>   // stat, lstat, fstat
# include <termios.h>    // tcsetattr, tcgetattr
# include <curses.h>     // tgetent, tgetflag, tgetnum, tgetstr, tgoto, tputs
# include <pwd.h>        // getpwuid

void	ft_errors_init(int number_error);

#endif
