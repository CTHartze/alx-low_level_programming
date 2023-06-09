#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Checks for digits in string.
 * @str: array pointer
 * Return: Always 0, on success
 */
int check_num(char *str)
{
	/*variable declaration*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*string count*/

	{
		if (!isdigit(str[count])) /*str digit status*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints program name
 * @argc: number of cmd line arguments
 * @argv: vector of C arrays
 * Return: Always 0, on success
 */

int main(int argc, char *argv[])

{

	/*Variable declaration*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Passes via the entire array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*atoi: converts str  into int*/
			sum += str_to_int;
		}

		/*Case when a number consists of symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*prints sum*/

	return (0);
}
