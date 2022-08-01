#include <stdio.h>
/* Write a program that prints the name of t*he file it was compiled from*/
int main(void)
{
	printf("%s\n",  _file_);
	return (0);
}
