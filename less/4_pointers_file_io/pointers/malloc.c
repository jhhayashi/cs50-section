#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr;

	ptr = malloc(sizeof(int));

	if (ptr == NULL)
	{
		printf("Out of memory\n");
		return 1;
	}

	*ptr = 50;
	
	printf("ptr = %d\n", ptr);
	printf("*ptr = %d\n", *ptr);

	free(ptr);

	return 0;
}
