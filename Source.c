#include<stdio.h>
void main() {
	int a, b, c;
	printf("Write any whole number.");
	scanf_s("%d", &a);
	b = (a % 100) / 10;
	printf("%d", b);
}