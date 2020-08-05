#include<stdio.h>
void main() {
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d\n%d\n%d", a, b, c);


}