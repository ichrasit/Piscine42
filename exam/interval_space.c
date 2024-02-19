// "Sınavda çoğu kişinin geçemediği sorudur. Bende patladım :)"
// "Her karakterin arasına 3 boşluk atıcak son karakter hariç | ./a.out "coconut" C   o   c   o   n   u   t$"
#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			while(av[1][i] <= 32 && av[1][i])
				i++;
			if(av[1][i] > 32 && av[1][i])
			{
				write(1, "   ", 1);
			}
			if(av[1][i + 1 <= 32] && av[1][i])
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}	
	}
	write(1, "\n", 1);
}
