/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:20:51 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/19 17:26:59 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/microshell.h"

int	main(void)
{
	char	**start;
	char	**return_execv;
	char	*input;

	input = "";
	while (ft_strncmp(input, "exit", 5) != 0)
	{
		input = readline("$ ");
		if (ft_strncmp(input, "echo", 4))
			ft_echo(&input[5]);
		else
		{
			return_execv = ft_split(input, ' ');
			start = return_execv;
			exec_commands(return_execv);
			while (*return_execv)
				free(*return_execv++);
			free(start);
		}
	}
	return (0);
}
