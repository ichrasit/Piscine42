// "Aynı firsword gibi fakat bunda ikinci argümanın içindeki stringin son kelimesini yazdırıcak"
//
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	int i = 0;
	int len = ft_strlen(av[1] - 1);

	if (ac == 2)
	{
		while(av[1][len] > 32 && av[1][len])
			len++;
		while(av[1][len] < 32 && av[1][len])
			len--;
		len++;
		while(av[1][len] > 32 && av[1][len])
		{
			write(1, &av[1][len], 1);
			len++;
			i++;
		}

			

	}
	write(1, "\n", 1);
}
