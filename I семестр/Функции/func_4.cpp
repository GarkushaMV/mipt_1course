

#include <stdio.h>

void draw_rectangle(int w, int h, char c)
{
	for (int i = 0; i < w; i++)
		printf("%c", c);
	printf("\n");

	for (int i = 2; i < h; i++ )
	{
		printf("%c", c);
		for (int j = 2; j < w; j++)
			printf(" ");
		printf("%c\n", c);
	}
	if (h > 1)
		for (int i = 0; i < w; i++)
			printf("%c", c);
}
