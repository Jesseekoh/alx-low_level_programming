#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>


/**
  * main - main block prints a message to the standard error
  * Return: 0
  */

int main(void)
{
	char message[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message));
	return (1);
}
