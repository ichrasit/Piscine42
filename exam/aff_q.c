// "sadece q yazdırıp alt satıra geçicek"
//
#include <unistd.h>

int	main()
{
	write(1, "q\n", 1);
}
