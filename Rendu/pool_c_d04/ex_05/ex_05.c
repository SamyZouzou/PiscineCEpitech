int	my_getnb(char *str)
{
	int neg;
	int i;
	long int nbr;
	
	neg = 1;
	i = 0;
	nbr = 0;
	
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}

	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] =='\f'||str[i] == '\r' || str[i] == ' ')
			i++;

	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	
	if (nbr >= -2147483648 && nbr <= 2147483647)
		return (nbr * neg);
	else 
		return (0);
}
