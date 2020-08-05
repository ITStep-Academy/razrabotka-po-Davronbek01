# include<stdio.h>
void main() {
	/*double a;
	int b;
	float c;
	printf("Write down float number.");
	scanf_s("%lf", &a);
	b = (int)a;
	c = a - b;
	printf("%d\n%.2f", b, c);*/



	/*int a, b;
	printf("Write any whple number.");
	scanf_s("%d", &a);
	b = a % 10;
	printf("%d", b);*/

	int a = 4000, hour, min, sec;
	hour = a / 3600;
	min = a / 60 - hour * 60;
	sec = a - hour * 3600 - min * 60;
	printf("%d", sec);
}