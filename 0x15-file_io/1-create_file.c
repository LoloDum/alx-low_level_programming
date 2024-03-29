#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}
	while (text_content[i])
		i++;
	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	else
	{
		write(file, text_content, i);
	}

	close(file);
	return (1);
}
