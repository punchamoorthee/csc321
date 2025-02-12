// Nanu Panchamurthy
// Lab 5a

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int integer_var = 10;
	float float_var = 3.14f;
	char char_var = 'A';
	double double_var = 2.715;

	printf("Integer Variable:\n");
	printf(" Value: %d\n", integer_var);
	printf(" Address: %p\n", &integer_var);

	printf("\nFloat Variable:\n");
	printf(" Value: %f\n", float_var);
	printf(" Address: %p\n", & float_var);

	printf("\nCharacter Variable:\n");
	printf(" Value: %c\n", char_var);
	printf(" Address: %p\n", &char_var);

	printf("\nDouble Variable:\n");
	printf(" Value: %lf\n", double_var);
	printf(" Address: %p\n", &double_var);

	if (1)
	{
		int scoped_var = 15;
	}

	// printf("\nScoped Variable Value: %d\n", scoped_var);
	
	int arr_ints[10];
	
	int i = 0;
	for (i; i < 10; i++)
	{
		printf(" Element %d Address: %p\n", i, &arr_ints[i]);
	}

	return EXIT_SUCCESS;
}
