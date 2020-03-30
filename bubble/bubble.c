#include <stdio.h>

int	main(void)
{
	int i, j, temp;
	int array[10] = {1, 10, 5, 4, 6, 7, 3, 8, 2, 9};

	for(i=0; i<10; i++)
	{
		for(j=0; j<9-i; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for(i=0; i<10; i++)
	{
		printf("%d", array[i]);
	}
	return(0);
}