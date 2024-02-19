#include <unistd.h>

void	ft_putnbr(int n)
{
	if(n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		write(1, &"0123456789"[n % 10], 1);
}

// "yazdığınız stringde kac z varsa yazıcak" 
// "putnbr ile pushluycaksınız | sınavda çıkıyor!!"

int	main(int ac, char **av)
{
	int i = 0;
	int counter = 0;

	if (ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == 'z' || av[1][i] == 'Z')
			{
				counter++;
			}
			i++;
		}
		ft_putnbr(counter);
	}
	write(1, "\n", 1);
}
