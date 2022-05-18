#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;
	_printf("Hello %c Rofiat\n", 'A');
	printf("Hello %c Rofiat\n", 'A');
	_printf("Hello %s Rofiat\n", "World");
	printf("Hello %s Rofiat\n", "World");
	n = _printf("%%\n");
	printf("%d\n", n);
	n = printf("%%\n");
	printf("%d\n", n);

	return (0);
}
