/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:28:50 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/20 12:28:51 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/microshell.h"

void	exec_commands(char **pathname)
{
	int			exit_code;
	pid_t		pid;
	extern char	**environ;

	pid = fork();
	if (pid == 0)
	{
		if (execve(*pathname, pathname, environ) == -1)
			return (0); //Need to be changed
	}
	else
		waitpid(pid, &exit_code, 0);
}
