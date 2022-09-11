#include <unistd.h>

void 	print_number(int i)
{
	char a;
	char b;

	a = '0';
	b = a + i;
	write (1, &b, 1);
}

void	print_numbers(int i, int j)
{
	char a;

	print_number(i);
	a = ' ';
	write(1, &a, 1);
	print_number(j);
	a = ',';
	write(1, &a, 1);
	a =' ';
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while(j < 100) 
		{
			print_numbers(i, j);
			j++;
		}
		i++;
	}
}

int main(){
	ft_print_comb2();
	return 0;
}
