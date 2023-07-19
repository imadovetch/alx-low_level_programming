#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operation;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operation = argv[2];
	num2 = atoi(argv[3]);

	if (operation == '%' || operation == '/')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}

	func = get_op_func(operation);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));

	return 0;
}
