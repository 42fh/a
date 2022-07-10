#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	return ;
}

char	*dict_to_string(char *filename);
char	**fill_str_in_array(char *str);
void	putline(char *str);
int		line_len(char *str);
int	validate_line(char *line);

int		main(void)
{
	char *str;
	char **arr;
	char *list_sml[32];

	str = dict_to_string("numbers.dict");
	if (str == 0)
		return (-1);
	ft_putstr(str);
	arr = fill_str_in_array(str);
	if (arr != 0)
		write(1, "hhh", 3);
	while (*arr != 0)
	{
		printf("%p\n", *arr);
		putline(*arr);
		printf("| vali is %d\n", validate_line(*arr));
		write(1, "====\n", 5);
		arr++;
	}

	return (100);
}
