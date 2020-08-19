#include<stdio.h>
int main() {
	float x;
	int y;
	printf("Please enter in an integer : ");
	scanf_s("%f", &x);
	if (x <= 0) {
		printf("Error please try again");
	}
	else if (x > 0) {
		float a = x + 1;
		printf("Height = %.2f", a);
		float b = ((x * 2) + 1);
		printf("\nBase = %.2f", b);
		float z = ((x + 1) / 2) * ((x * 2) + 1);
		printf("\nTriangle area = (1/2 * Base * Height) =  %.2f", z);
		printf("\n");
		for (y = 1; x >= y; y++) {
			for (int i = 1; i <= y; i++) {
				printf(" * ");
			}
			printf("\n");
		}
		for (int i = 0; i <= x; i++) {
			printf(" * ");
		}
		printf("\n");
		for (y = 1; x >= y; y++) {
			for (int i = x; i >= y; i--) {
				printf(" * ");
			}
			printf("\n");
		}
	}
	return 0;
}