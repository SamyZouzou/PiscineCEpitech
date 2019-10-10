int	my_strlen(char *str)
{
	int i;

	i = -1;
	while (*(++i + str))
		;
	return (i);
}
