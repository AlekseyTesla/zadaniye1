#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int X, x, y, z, sum;
	printf("Vvedite chislo ");
	scanf_s("%d", &X);
	x = X % 10;
	y = X / 10 % 10;
	z = X / 100;
	sum = x + y + z;
	printf("%d", sum);
	system("pause");
	return 0;
}