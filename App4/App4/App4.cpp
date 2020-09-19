#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a, b, c, p, S;
	printf("Vvedite storony a ");
	scanf_s("%d", &a);
	printf("Vvedite storony b ");
	scanf_s("%d", &b);
	printf("Vvedite storony c ");
	scanf_s("%d", &c);
	p = (a + b + c) / 2;
	S = p*(p - a)*(p - b)*(p - c);
	printf("%d", S);
	system("pause");
	return 0;
}