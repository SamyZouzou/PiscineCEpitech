void	my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	my_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{

		j = i;
		while (j < size)
		{
			if (tab[j] < tab[i])
				my_swap(&tab[j], &tab[i]);
			j++;
		}		
		i++;
	}
	
}
