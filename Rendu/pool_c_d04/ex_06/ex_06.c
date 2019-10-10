#include <unistd.h>

int	my_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2) 
			return (*s1 - *s2);
		else
		{
			*s1++;
			*s2++;
		}
	}
	return (0);
}

void	my_putstr(char *str)
{
	int i;

	i = -1;
	while (*(++i + str))
		;
	write(1, str, i);
}

int	my_strlen(char *str)
{
	int i;

	i = -1;
	while (*(++i + str))
		;
	return (i);
}

void	my_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	display(char **tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		my_putstr(tab[i++]);
		write(1,"\n",1);
	}
}

void	my_show_array(char **tab, int size)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (i < size)
	{
		while (k < size - 1)
		{
			if (my_strlen(tab[k]) > my_strlen(tab[k + 1]))
				my_swap(&tab[k + 1], &tab[k]);	
			else if (my_strlen(tab[k]) == my_strlen(tab[k + 1]))
			{
				if (my_strcmp(tab[k], tab[k + 1]) < 0)
					my_swap(&tab[k + 1], &tab[k]);
			}
			k++;		
		}		
		i++;
		k = 0;
	}
	display(tab, size);
}
