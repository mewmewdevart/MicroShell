#include "../include/microshell.h"

// Function to print initialization errors
void	ft_errors_init(int number_error)
{
	if (number_error == 2)
		ft_printf("Error\nNo such file or directory.\n");
	else if (number_error == 5)
		ft_printf("Error\nInput/Output error!\n");
	else if (number_error == 13)
		ft_printf("Error\nPermission denied");
	else if (number_error == 22)
	{
		ft_printf("Error\nInvalid argument!\n");
		ft_printf("Ex: ./pipex <file1> <cmd1> <cmd2> <file2>\n");
	}
	exit (1);
	return ;
}
