#include "main.h"

/* print characters */
int main(void)
{
	char X[] = "_putchar";
	int Y;
	
	for (Y = 0; Y < 3; Y++)
	{
		_putchar(X[Y]);
	}
	_putchar('\n');
	return (0);
}
