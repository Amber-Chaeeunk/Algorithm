#include <stdio.h>

int	main(void)
{
	int i, j, temp, index, min;
	int array[10] = {3, 4, 2, 6, 7, 5, 8, 1, 9, 0};

	i = 0;
	for(i=0; i<10; i++)
	{
		min = 9999;
		for(j=i; j<10; j++)
		{
			if(min > array[j])
			{
				min = array[j];
				index = j;
			}
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
		}
	}
	for(i=0; i<10; i++)
	{
		printf("%d", array[i]);
	}
	return(0);
}
