#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int xa, xb, xc, ya, yb, yc;
	float ab, bc, ac, p, S;
	printf("Vvedite koordinaty a ");
	scanf_s("%d%d", &xa, &ya);
	printf("Vvedite koordinaty b ");
	scanf_s("%d%d", &xb, &yb);
	printf("Vvedite koordinaty c ");
	scanf_s("%d%d", &xc, &yc);
	ab = sqrt(pow((xa - xb),2) + pow((ya - yb),2));
	bc = sqrt(pow((xa - xc), 2) + pow((ya - yc), 2));
	ac = sqrt(pow((xb - xc), 2) + pow((yb - yc), 2));
	S = ab + bc + ac;
	printf("%f", S);
	system("pause");
	return 0;
}