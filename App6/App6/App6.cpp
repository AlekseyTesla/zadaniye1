#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int a, b;
	float c;
	printf("Vvedite perviy katet ");
	scanf_s("%d", &a);
	printf("Vvedite vtoroy katet ");
	scanf_s("%d", &b);
	c = sqrt(pow(a, 2) + pow(b, 2));
	printf("%f", c);
	system("pause");
	return 0;
}