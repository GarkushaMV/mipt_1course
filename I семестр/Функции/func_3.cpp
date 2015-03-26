

#include <stdio.h>

void fill_rectangle(int w, int h)
{
	for (int i = 0; i< h; i++ )
	{
		for (int j = 0; j<w; j++)
			printf("*");
		printf("\n");
	}
}
