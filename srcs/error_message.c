/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:29:58 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/20 12:30:00 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/microshell.h"

// Function to print initialization errors
void	ft_errors_init(int number_error)
{
	(void)number_error;
	exit (1);
	return ;
}
