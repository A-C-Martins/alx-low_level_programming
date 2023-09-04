#include "main.h"

/**
 * read_textfile - Prints the content of a file
 * @filename: file to be accessed
 * @letters: number of strings to be printed
 * 
 * Return: letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *myString, *arr = ".txt", *myString1 = '\0';
	size_t i, j = 0;

	myString = malloc(sizeof(filename) + sizeof(arr));

	if (myString == NULL)
	{
		return (0);
	}

	for (i = 0; filename[i] != '\0'; i++)
	{
		myString[j] = filename[i];
		j++;
	}

	if (filename[i] != ".")
	{
		for (i = 0; arr[i] != '\0'; i++)
		{
			myString[j] = arr[i];
			j++;
		}
	}
	myString[j] = '\0';

	printf("%s\n", filename);

	for (i = 0; myString[i]; i++)
	{
		fptr = fopen(myString, "r");
	}

	if (myString1[j] < letters || myString1[j] > letters)
	{
		return (0);
		j++;
	}
	else
		fgets(myString1, letters, fptr);

	printf("%s", myString1);

	fclose(fptr);

	free(myString);
	return (letters);
}
