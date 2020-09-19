#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int X, Y, inumber, fnumber;
	printf("Vvedite X ");
	scanf_s("%d", &X);
	printf("Vvedite Y ");
	scanf_s("%d", &Y);
	inumber = X / Y;
	fnumber = X % Y;
	printf("%d\n", inumber);
	printf("%d", fnumber);
	system("pause");
	return 0;
}