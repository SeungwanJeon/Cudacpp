#include<stdio.h>

int main() {
	printf("hellow world\n");

	char buffer[50];
	int n, a, b;
	scanf_s("%d %d", &a, &b);
	n = sprintf_s(buffer, "%d plus %d is %d", a, b, a + b);
	printf("[%s] is a string %d chars long \n", buffer, n);

	return 0;
}
