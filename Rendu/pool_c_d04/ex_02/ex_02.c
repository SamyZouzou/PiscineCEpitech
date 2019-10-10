#include <unistd.h>

void	my_putstr(char *str)
{
	int i;

	i = -1;
	while (*(++i + str))
		;
	write(1, str, i);
}
