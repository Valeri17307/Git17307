#include <stdio.h>
int main()
{
	int xb, yb, xa, ya, A, B;
	printf("Xb: ");
	scanf("%d", &xb);
        printf("Ya: ");
	scanf("%d", &ya);
        printf("Xa: ");
	scanf("%d", &xa);
        printf("Yb: ");
	scanf("%d", &yb);
	A = xa + ya;
        B = xb + yb;
        printf("A = xa + ya = %d\n", A);
        printf("B = xb + yb = %d\n", B);
	return 0;
}