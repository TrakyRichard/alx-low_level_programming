#include <stdio.h>

/**
 * main - print program name followed by a new line
 * without to compile it again
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
