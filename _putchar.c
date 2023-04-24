#include <unistd.h>

/**
 * _putchar - print char till the end
 * @ch: char to be printed
 * Return: Output to main as character.
 */

int _putchar(char ch)
{
	static int conta_dor;
	static char buffer[1024];

	if (ch == -1)
	{
		conta_dor = 0;
		return (0);
	}
	if (ch == -2 || conta_dor == 1024)
	{
		write(1, buffer, conta_dor);
		conta_dor = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[conta_dor] = ch;
		conta_dor++;
		return (1);
	}
	return (0);
}
