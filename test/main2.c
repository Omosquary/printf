#include "../main.h"
#include <stdio.h>

int main(void)
{
	_printf("Hello %c Rofiat\n", 'A');
	printf("Hello %c Rofiat\n", 'A');
	_printf("Hello %s Rofiat\n", "World");
	printf("Hello %s Rofiat\n", "World");
	_printf("%%\n");
	printf("%%\n");

	return (0);
}
