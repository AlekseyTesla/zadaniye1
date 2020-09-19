#include <stdio.h>
int main(void)
{
	int X, last_number;
	scanf_s("%d", &X);
	last_number = (X % 10);
	printf("%d", last_number);
	return 0;
}