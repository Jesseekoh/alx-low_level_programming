#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
  * main - main block prints a message to the standard error
  * Return: 0
  */

int main(void)
{
	char msg[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int msgLen = strlen(msg);
	write(2, msg, strlen(msg));
	return (1);
}
